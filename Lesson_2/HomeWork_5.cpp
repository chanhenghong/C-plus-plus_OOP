//  Hong Chanheng 

#include<iostream>
#include<conio.h>
#include<iomanip>
#include<string.h>

using namespace std;
class Salebook
{
	string BookName;
	string Writer;
	double price;
	int yearPrinted;

  public:
  	void SetBookName(string Name)
	{
	  	BookName  = Name;
	}
	void SetWriter(string writer)
	{
	 	Writer  =  writer  ;
	}
	void SetPrice(double price)
	{
	  this-> price  =  price ;	
	}
	void SetYearPrinted(int year)
	{
		yearPrinted = year;
	}
  	void OnlineBooks(string BookName,string Writer,double price,int yearPrinted);
	void DisplaySaleProfile(int A) ;	
};

     void Salebook::OnlineBooks(string BookName,string Writer,double price,int yearPrinted)
	 {
     	this-> BookName   = BookName;
     	this-> Writer     = Writer;
     	this-> price      = price;
     	this-> yearPrinted = yearPrinted;
	 }
	 void  Salebook::DisplaySaleProfile(int A)
	 {
	 	cout << " Book " << A <<":"<<"\n"<<endl;
	 	cout <<"\t" <<"BookName     :"<<BookName<<endl;
	 	cout <<"\t" <<"Writer       :"<<Writer<<endl;
	 	cout <<"\t" <<"price($)     :"<<price<<endl;
		cout <<"\t" <<"yearPrinted  :"<<yearPrinted<<"\n"<<endl;
	 }
	 
int main()
{
	
	Salebook A1;
	 
	 A1.SetBookName("The Miracle Morning(Khmer Version)");
	 A1.SetWriter("HAL ELROD");
	 A1.SetPrice(6);
	 A1.SetYearPrinted(2020);

	 cout<<"\n\n\t\t\tSale Book\n\n\n";
	 
	 A1.DisplaySaleProfile(1);

	Salebook A2;
	
	 A2.OnlineBooks("Mark Zuckerberg(Khmer Version)","Ekaterina Walter",3,2015);
	
	 A2.DisplaySaleProfile(2);
	 
	cout <<"\n\t\t\tTHANKS YOU";
	
	getch();
	return 0;
	
}	 
	 
	 
