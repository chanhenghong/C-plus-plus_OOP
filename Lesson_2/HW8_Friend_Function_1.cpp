// Hong Chanheng
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class Course 
{
	private:
		string name;
		double price;
		int discount;
	public:
		Course(): name(""), price(0), discount(0)
		{
		}
	public:
		Course(string name, double price, int discount)
		{
			this->name = name;
			this->price = price;
			this->discount = discount;
		}
		void setName(string name)
		{
			this->name = name;
		}
		void setPrice(double price)
		{
			this->price = price;
		}
		void setDiscount(int discount)
		{
			this->discount = discount;
		}
		double getPayment() const
		{
			return  price - (price * discount/100);
		}
	public:
	   friend void ShowCourseProfile(Course& cs);
	   friend class Invoice;	
};


void ShowCourseProfile(Course& cs)
{
	        cout << "\n\t\tName   = " <<cs.name<<endl;
	        cout << "\t\tPrice     = " <<cs.price<<endl;
	        cout << "\t\tDiscount  = " <<cs.discount<<endl;
        	cout << "\t\tPayment   = " <<cs.getPayment() <<endl;
}
class Invoice 
{
	public:
		void ShowInvoice(Course& cs)
		{
			cout << "\n\t\tName    = " <<cs.name<<endl;
			cout << "\t\tPrice     = " <<cs.price<<endl;
			cout << "\t\tDiscount  = " <<cs.discount<<endl;
			cout <<"\t\tPayment    = " <<cs.getPayment() <<endl;
		}
		
};

int main()
{
	Course a1;
	Course a2 = Course("Java", 80, 10);
	
	a1.setName("C++");
	a1.setPrice(70);
	a1.setDiscount(10);
	
	ShowCourseProfile(a1);
	ShowCourseProfile(a2);
	
	Invoice b1;
	
    b1.ShowInvoice(a1);
    b1.ShowInvoice(a2);

	getch();
	return 0;	
}





