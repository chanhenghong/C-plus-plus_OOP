// Hong Chanheng
#include<iostream>
#include<conio.h>
using namespace std;
class Customer{
	private:
		string name;
		char gender[15];
		char tel[20];
		string address;
	public:
		Customer();
		Customer(string name, const char* gender, const char* tel, string address);
		void setName(string name);
		void setGender(const char* gender);
		void setTel(const char* tel);
		void setAddress(string address);
		void DisplayCustomerProfile();
};
int main()
{
	Customer a1;
	Customer a2 = Customer("Hong Chanheng","Male","012345678","Battambang");
	Customer a3 = a2;
	
	a1.setName("Ronaldo");
	a1.setGender("Male");
	a1.setTel("012436587");
	a1.setAddress("Italy");
	
	cout<<"\n\t\t\tDisplayCustomerProfile\t\t\t\n"<<endl;
	a1.DisplayCustomerProfile();
	a2.DisplayCustomerProfile();
	a3.DisplayCustomerProfile();
	cout<<"\n\t\t\t     Thank You!"<<endl;
		
	getch();
	return 0;
}
Customer::Customer()
{
	this->name = "";
	strcpy(this->gender, "");
	strcpy(this->tel, "");
	this->address = "";
}
Customer::Customer(string name, const char* gender, const char* tel, string address)
{
	this->name = name;
	strcpy(this->gender, gender);
	strcpy(this->tel, tel);
	this->address = address;
}
void Customer::setName(string name)
{
	this->name = name;
}
void Customer::setGender(const char* gender)
{
	strcpy(this->gender, gender);
}
void Customer::setTel(const char* tel)
{
	strcpy(this->tel, tel);
}
void Customer::setAddress(string address)
{
	this->address = address;
}
void Customer::DisplayCustomerProfile()
{
	
	cout<<"\n\tName      : "<<name<<endl;
	cout<<"\tGender    : "<<gender<<endl;
	cout<<"\tTel       : "<<tel<<endl;
	cout<<"\tAddress   : "<<address<<"\n"<<endl;

}
