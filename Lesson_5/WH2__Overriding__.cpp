// Hong Chanheng
#include <iostream>
#include <conio.h>
#include <iomanip>
using namespace std;
class Rectangle{
	protected:
		double width;
		double length;
	public:
	    virtual void setWidth(double width)
		{
		    this->width=width;	
		}	
		virtual void setLength(double length)
		{
			this->length=length;
		}
		double getArea() const 
		{
			return width*length;
		}
	public:
	    virtual void showInfo()	
	    {
	    	cout << "\n\t" << left << setw(25) << width << setw(25) << length << setw(25) << getArea() << endl;
		}
		virtual ~Rectangle()
		{
		}
	public:
	    static void Header()
		{
		    cout << "\n\t" << left << setw(25) << "Width" << setw(25) << "Length" << setw(25) << "Area" << endl;
		}	
		static void Footer()
		{
			cout << "\n\t\t\t  THANK YOU! SO MUCH!!  \n";
		}
};

class Square:public Rectangle{
	private:
	    double side;    
	public:
	    virtual void setWidth(double side)
		{
		    this->side=side;	
		}
		virtual void setLength(double side)
		{
		    this->side=side;	
		}
		double getArea() const 
		{
			return side*side;
		}	
	public:
	    virtual void showInfo()
		{
		    cout << "\n\t" << left << setw(25) << side << setw(25) << getArea() << endl;	
		}
	public:
	    static void header()
		{
		    cout << "\n\n\t" << left << setw(25) << "Side" << setw(25) << "Area" << endl;
		}		
};
int main()
{
	Rectangle r1,r2;
	r1.setLength(20);
	r1.setWidth(10);
	
	r2.setLength(15);
	r2.setWidth(5);

	Rectangle::Header();
	r1.showInfo();
	r2.showInfo();
	Square s1,s2;
	
	s1.setLength(25);
	s1.setWidth(25);
	
	s2.setLength(40);
	s2.setWidth(40);

	Square::header();
	s1.showInfo();
	s2.showInfo();
	Rectangle::Footer();
	
	getch();
	return 0;
}









