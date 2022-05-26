// Hong Chanheng
#include<iostream>
#include<conio.h>
using namespace std;

class Subject {
	private:
		int score[4];
	public:
		int& operator[](int position)
		{
			return score[position];
		}
};

int main()
{

    Subject a1, a2;

    a1.operator[](0) = 80;
    a1.operator[](1) = 97;
    a1.operator[](2) = 90;
    a1.operator[](3) = 99;
 
    cout<<"\n\tEnglish         Math            Khmer           CPP\n"<<endl;
	for(int i = 0; i<4; i++)
	{
		cout <<"\t"<< a1.operator[](i) << "\t";
	}

	getch();
	return 0;
}