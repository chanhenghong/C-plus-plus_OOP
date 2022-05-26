//Name: Hong Chanheng
#include<iostream>
#include<conio.h>
#include<iomanip>

using namespace std;
class Product{
	public:
		int barcode;
		char Name[30];
		int qty;
		float price;
		float amount;
};
void enterInfo(Product& all)
{

	cout<<"\nEnter Barcode : "; cin>>all.barcode; fflush(stdin); cin.clear();
	cout<<"\nEnter Name : "; cin.get(all.Name, 30); fflush(stdin); cin.clear();
	cout<<"\nEnter Qty : "; cin>>all.qty; fflush(stdin); cin.clear();
	cout<<"\nEnter Price : "; cin>>all.price; fflush(stdin); cin.clear();
    
}
void showInfo(Product& all)
{
	all.amount = all.qty * all.price;
	
	cout<<"\n\n"<<left<<setw(10)<<all.barcode<<setw(20)<<all.Name<<setw(8)<<all.qty<<setw(8)<<all.price<<setw(8)<<all.amount<<endl;
	
}
int main()
{
	Product a1, a2, a3;
	cout<<"\n====================_Enter_====================="<<endl;
	enterInfo(a1);
	enterInfo(a2);
	enterInfo(a3);
	
	cout<<"\n=====================_Show_====================="<<endl;
	cout<<"\n"<<"Barcode   "<<"Product Name        "<<"Qty     "<<"Price   "<<"amount  "<<endl;
	showInfo(a1);
	showInfo(a2);
	showInfo(a3);
	cout<<"\n\n===================_Thank You_=================="<<endl;
	getch();
	return 0;
}