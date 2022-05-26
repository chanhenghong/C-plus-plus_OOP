//  Hong Chanheng
#include<iostream>
#include<conio.h>
using namespace std;
class Product
{
    private:
        int qty;
    public:
  	    Product& operator =(int value)
    	{
    		this->qty = value;
        }
    public:
    	Product& operator ++()
    	{
    		++(this->qty);
        }
   public:
    	Product& operator --()
    	{
    		--(this->qty);
        }
    public:
        Product operator ++(int )
        {
        	Product P;
        	P.qty = (this->qty)++;
    	}
	public:
        Product operator --(int )
        {
        	Product P;
         	P.qty = (this->qty)--;
    	}
	void display(int n)
    	{
		    cout <<"\n\t\t"<<"Product      ("<<n<<")"<<"\n"<<endl;
	    	cout <<"\n\t"<<"Quantity   :"<<this->qty<<endl;
    	}  			
};
int main()
{
	Product a1,a2;
	a1=20;
	a2=30;
	
	a1.display(1);
	a2.display(2);

	++a1;
	--a2;
	a1.display(3);
	a2.display(4);

	Product A1,A2;
	A1=A2=40;
	A1++;
	A2--;
	
	A1.display(5);
	A2.display(6);

	Product C1,C2,C3,C4;
	C1 = C2 = 50;
	C3 = ++C1;
	C4 = C2--;

	C3.display(7);
	C4.display(8);
	
	
	getch();
	return 0;
}
