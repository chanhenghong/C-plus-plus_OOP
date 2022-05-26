// Hong Chanheng
#include<iostream>
#include<conio.h>
using namespace std;
class Product{
	private:
		string itemName;
		int qty;
		double price;
	public:
		void setItem(string itemName, int qty, double price)
		{
			this->itemName = itemName;
			this->qty = qty;
			this->price = price;
		}
		void display(int n)
		{
			cout<<"\n\tProduct "<<n<<endl;
			cout<<"\n\t\tItem Name : "<<this->itemName<<endl;
			cout<<"\t\tQty        : "<<this->qty<<endl;
			cout<<"\t\tPrice      : "<<this->price<<endl;
		}
		static void Header()
		{
			cout<<"\n\n\t\t     Display\n"<<endl;
		}
		static void Footer()
		{
			cout<<"\n\n\t\t    Thank You"<<endl;
		}
};
int main()
{
	Product arrayProduct[5];
	
	arrayProduct[0].setItem("Coke", 100, 2.5);
	arrayProduct[1].setItem("Pepsi", 50, 0.75);
	
	Product::Header();
	
    for(int i=0; i<2; i++)
	{
		arrayProduct[i].display(i+1);
	}
	
	Product::Footer();
	
	getch();
	return 0;
}