// Hong Chanheng
#include<iostream>
#include<conio.h>
using namespace std;
class SaleBook{
	private:
		string bookName;
		string writter;
		double price;
		int yearPrinted;
	public:
		SaleBook();
		SaleBook(string bookName, string writter, double price, int yearPrinted);
		void setBookName(string BookName);
		void setWriter(string writter);
		void setPrice(double price);
		void setYearPrinted(int yearPrinted);
		void DisplaySaleProfile();
		static void Header();
		static void Footer();
};
int main()
{
	SaleBook a1,a2;
	SaleBook a3 = SaleBook("Miracle Morning","Hal Elrod", 6, 2020);
	
	a2.setBookName("English in Common");
	a2.setWriter("Mark Foley and Diane Hall");
	a2.setPrice(11);
	a2.setYearPrinted(2012);
	
	SaleBook::Header();
	a1.DisplaySaleProfile();
	a2.DisplaySaleProfile();
	a3.DisplaySaleProfile();
	SaleBook::Footer();
	
	getch();
	return 0;
}
SaleBook::SaleBook(): bookName("Unknown"), writter("Unknown"), price(0), yearPrinted(0)
{
}
SaleBook::SaleBook(string bookName, string writter, double price, int yearPrinted): bookName(bookName), writter(writter), price(price), yearPrinted(yearPrinted)
{
}
void SaleBook::setBookName(string bookName)
{
	this->bookName = bookName;
}
void SaleBook::setWriter(string writter)
{
	this->writter = writter;
}
void SaleBook::setPrice(double price)
{
	this->price = price;
}
void SaleBook::setYearPrinted(int yearPrinted)
{
	this->yearPrinted = yearPrinted;
}
void SaleBook::DisplaySaleProfile()
{
	cout<<"\n\tBook Name      : "<<this->bookName<<endl;
	cout<<"\tWritter        : "<<this->writter<<endl;
	cout<<"\tPrice          : "<<this->price<<" $"<<endl;
	cout<<"\tYear Printed   : "<<this->yearPrinted<<endl;
}
void SaleBook::Header()
{
	cout<<"\n\t\t\tDisplay Sale Profile"<<endl;
}
void SaleBook::Footer()
{
	cout<<"\n\t\t\t  Thank You! :)"<<endl;
}
