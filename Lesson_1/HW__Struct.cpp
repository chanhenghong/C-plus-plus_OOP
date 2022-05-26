#include<iostream>
#include<conio.h>
#include<string.h> 
#include<iomanip>
using namespace std;

struct Product{
	
	int barcode;
	char name[30];
	int qty;
	int price;
};
int main()
{
	struct Product A1 = { 01234, "Book", 5, 10 };
	
	struct Product A2[3];
	
	cout<<"\n_________________________Input_Info____________________________"<<endl;
	for(int i=0;i<3;i++)
	{   
		cout<<"\nEnter barcode "<< (i+1) <<":"; cin>>A2[i].barcode; fflush(stdin); cin.clear();
		cout<<"\nEnter ItemName "<< (i+1) <<":"; cin.get(A2[i].name, 30); fflush(stdin);
		cout<<"\nEnter Qty "<< (i+1) <<":"; cin>>A2[i].qty; fflush(stdin); cin.clear();
		cout<<"\nEnter Price "<< (i+1) <<":"; cin>>A2[i].price; fflush(stdin); cin.clear();
	}
	    cout<<"\n_________________________display_Info__________________________"<<endl;
		cout << "\n\n" << left << setw(15) << "Barcode" << setw(25) << "ProductName" << setw(20) << "Quantity" << setw(20) << "Price" << endl;	
    for (int i=0; i<3; i++)
    {
        cout << left << setw(15) << A2[i].barcode << setw(25) << A2[i].name << setw(20) << A2[i].qty << setw(20) << A2[i].price << endl;		
    }
        cout << left << setw(15) << A1.barcode << setw(25) << A1.name << setw(20) << A1.qty << setw(20) << A1.price << endl;
    
	return 0;    
    getch();
}