// Hong Chanheng
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;

class Customer{
	private:
		char name[20];
		char gender[2];
		int age;
		char tel[14];
		char addr[10];
	public:
		void input()
		{
			cout<<"\nEnter Name : "; cin.get(name, 20); fflush(stdin); cin.clear();
			cout<<"\nEnter Gender : "; cin.get(gender, 2); fflush(stdin); cin.clear();
			cout<<"\nEnter Age : "; cin>>age; fflush(stdin); cin.clear();
			cout<<"\nEnter Tel : "; cin.get(tel, 14); fflush(stdin); cin.clear();
			cout<<"\nEnter Address : "; cin.get(addr, 10); fflush(stdin); cin.clear();
		}
	public:
		void showinfo()
		{
			cout<<"\n\n"<<left<<setw(20)<<name<<setw(7)<<gender<<setw(7)<<age<<setw(14)<<tel<<setw(10)<<addr<<endl;
		}
};
int main()
{
	Customer a, b, c;
	
	cout<<"\n_________________________Input_________________________"<<endl;
	a.input();
	b.input();
	c.input();
	
	cout<<"\n\n_________________________ShowInfo_________________________"<<endl;
	cout<<"\n\nName                "<<"Gender "<<"Age    "<<"Tel           "<<"Address   "<<endl;
	a.showinfo();
	b.showinfo();
	c.showinfo();
	
	getch();
	return 0;
}