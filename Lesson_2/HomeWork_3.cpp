#include<iostream>
#include<conio.h>
using namespace std;
class Movie
{
	private:
		string title;
		int duration;
		string genre;
	public:
	    void setTitle(string title)
	    {	 
			this->title = title;
	    }
		void setDuration(int time)
	    {
			duration = time;
		}	
		void setGenre(string type)
        {
		     	genre = type;
	    }	
	public:
	    void show(int n)
		{
			cout<<"\n\tTitle : "<<title<<endl;
			cout<<"\n\tDuration : "<<duration<<endl;
			cout<<"\n\tGenre : "<<genre<<endl;
		}	    
};
int main()
{
	Movie m1;
	
	m1.setTitle("Godzilla Vs Kong");
	m1.setDuration(113);
	m1.setGenre("Action");
	
	Movie m2;
	
	m2.setTitle("Mortal Kombat");
	m2.setDuration(110);
	m2.setGenre("Action");
	
	cout<<"\n\n____________________Show____________________\n"<<endl;
	m1.show(1);
	cout<<"\n\n"<<endl;
	m2.show(2);
	cout<<"\n\n____________________Thank!____________________\n"<<endl;
	
	getch();
	return 0;
}