// Hong Chanheng
#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class University {
    protected:
    	string universityName;
    	string location;
    public:
    	void setUniversityInfo(string universityName, string location)
    	{
    		this->universityName = universityName;
    		this->location = location;
		}
};
class Student: public University {
    protected:
    	int id;
    	string name, gender;
    	int age;
    	string tel, from, status;
    public:
    	void setID( int id )
    	{
    	    this->id = id;
		}
	    void setStudentInfo(string name, string gender, int age, string tel, string from, string status)
	    {
	    	this->name = name;
	    	this->gender = gender;
	    	this->age = age;
	    	this->tel = tel;
	    	this->from = from;
	    	this->status = status;
		}
};
class Employee: public Student { 
    private:
    	int empid;
    	string position;
    	double salary;
	public:
		void setEmployeeProfile(int empid, string position, double salary)
		{
			this->empid = empid;
			this->position = position;
			this->salary = salary;
		}
		void show(int n)
		{
			cout << "\n\n\t\t________Employee_Profile( "<<n<<" )_________\n\n";
			cout << fixed << setprecision(2);
			cout << "\n\t\tEmployee ID   = " << this->empid << endl;
			cout << "\n\t\tPosition      = " << this->position <<endl;
			cout << "\n\t\tSalary        = " << this->salary <<"$"<<endl;
			cout << "\n\t\tName          = " << this->name <<endl;
			cout << "\n\t\tGender        = " << this->gender <<endl;
			cout << "\n\t\tAge           = " << this->age << " Years ." << endl;
			cout << "\n\t\tTel           = " << this->tel << endl;
			cout << "\n\t\tFrom          = " << this->from << endl;
			cout << "\n\t\tStatus        = " << this->status << endl;
			cout << "\n\t\tUniversity    = " << this->universityName << endl;
			cout << "\n\t\tLocation      = " << this->location <<endl;
			
		}
};

int main()
{   
	Employee a1, a2;
	
	a1.setEmployeeProfile(10001,"Accounting",120);
	a1.setStudentInfo("Tuy Muy","Famale",19,"012345678","TK","Single ( nhea ban )");
	a1.setUniversityInfo("RUPP","TK");
	
	a2.setEmployeeProfile(10002,"Mobile Development",1000);
	a2.setStudentInfo("Hong Chanheng","Male",19,"012345678","Pou Jen Tong","Single ( nhea ban )");
	a2.setUniversityInfo("RUPP","TK");
	
	a1.show(1);
	a2.show(2);

	getch();
	return 0;
}