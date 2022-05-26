//  Hong Chanheng
#include<iostream>
#include<conio.h>
#include<string.h>
#include<iomanip>
using namespace std;
class Supplier
{
	private:
		string countryName;
		string companyName;
	public:
		Supplier()
		{
		}
	    Supplier(string countryName,string companyName)
	    {
	    	this->countryName = countryName;
	    	this->companyName = companyName;
		}
		
	    string getCountryName()const
     	{
	    	return countryName;
    	}
    	string getCompanyName()const
    	{
	    	return companyName;
    	}

};
class Product
{
	private:
		int barcode;
		string itemName;
		int qty;
		double price;
		Supplier Supp;
	public:
		void setAll(int barcode,string itemName,int qty,double price,string countryName,string companyName)
		{
			this->barcode = barcode;
			this->itemName=itemName;
			this->qty     = qty;
			this->price   = price;
			this->Supp    = Supplier(countryName,companyName);
			
		}
	public:
		void setProductDetails(int barcode,string itemName,int qty,double price,Supplier& SuppObj)
		{
			this->barcode = barcode;
			this->itemName=itemName;
			this->qty     = qty;
			this->price   = price;
			this->Supp    =  SuppObj;
		}
		double getTotal()
		{
		    return qty*price;	
		}
	public:
	    void ShowProduct()	
		{	
	      cout << fixed <<setprecision(2);
	  	  cout<<"\n\t\t"<<this->barcode<<setw(18)<<this->itemName<<setw(12)<<this->qty<<setw(15)<<this->price<<"$"<<setw(15)<<this->getTotal()<<"$"<<setw(15)<<Supp.getCountryName()<<setw(15)<<Supp.getCompanyName()<<endl;
		}
	static void Header()
	{
		cout<< "\n\n                                             Display\n\n";
		cout<<"\n\t\t"<<"Barcode"<<setw(15)<<"itemName"<<setw(15)<<"Quantity"<<setw(15)<<"Price($)"<<setw(15)<<"Total($)"<<setw(15)<<"CountryName"<<setw(15)<<"CompanyName"<<"\n"<<endl;
	}
	static void  Footer()
	{
		cout<<"\n\n                                              Thank You\n";
	}
};

int main()
{
    Supplier A1 = Supplier("Singapore","Apple");
    Supplier A2 = Supplier("Taiwan","MSI");
  
  
    Product a1,a2,a3,a4,a5;
    a1.setProductDetails(101,"iPhone Xs ",10,900,A1);
    a2.setProductDetails(102,"iPhone 11 Pro ",20, 1000,A2);
    a3.setProductDetails(103,"MSI Modern 15 ",25, 800,A2);
    a4.setProductDetails(104,"MSI Prestige 15",30,1500,A1);
    a5.setAll(105,"Dell G15",23,1200,"United State","DELL");
  
    Product::Header();
    a1.ShowProduct();
    a2.ShowProduct();
    a3.ShowProduct();	
    a4.ShowProduct();
    a5.ShowProduct();	
    Product::Footer();
  
  
  
  
    getch();
    return 0;
}





















