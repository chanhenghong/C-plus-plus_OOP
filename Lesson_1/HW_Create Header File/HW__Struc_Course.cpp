//Hong Chanheng
#include<iostream>
#include<conio.h>
#include "Course.h"
#include<string.h>
#include<iomanip>

using namespace std;

int main()
{
	struct Course A = { "C++ OOP", 200, 10 };
	
	struct Course B = { "Java", 230, 0 };
	
	struct Course C = { "C#", 240, 0 };
	cout<<"\n__________________________Show_Info_____________________________"<<endl;
	
	cout<<"\n\n"<<left<<setw(15)<<"Course Name"<<setw(15)<<"Price($)"<<setw(15)<<"Discount(%)"<<setw(20)<<"PriceAfterDiscout($)"<<endl;
	
	cout<<"\n"<<left<<setw(15)<<A.name<<setw(15)<<A.price<<setw(15)<<A.discount<<( A.price - (A.price*A.discount/100) )<<endl;
	
	cout<<"\n"<<left<<setw(15)<<B.name<<setw(15)<<B.price<<setw(15)<<B.discount<<endl;
	
	cout<<"\n"<<left<<setw(15)<<C.name<<setw(15)<<C.price<<setw(15)<<C.discount<<endl;
	
 
    getch();
    return 0;
}