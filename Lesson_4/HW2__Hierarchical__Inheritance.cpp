//Hong Chanheng
#include<iostream>
#include<conio.h>
#include<string.h>
using namespace std;
class Employee
{
    protected:
        int id;
	    string name;
    public:
        void setId(int id)
        {
       	  this->id = id ;
	    }	
	        void setName(string name)
	    {
	    	this->name = name ;
	    }
    	void setAllEmployee(int id,string name)
	    {
	    	this->id = id ;
	    	this->name = name ;
		}
};
class FullTimeEmployee:public Employee
{
  	protected:
  		string position;
  		double salary;
  		string Full_Time;
    public:
    	void setPosition(string position)
    	    {
    	    	this->position = position ;
			}
  	    void setSalary(double salary)
  	        {
  	           this->salary = salary;	
			}
		void setFull_Time(string FTime)
		    {
		    	this->Full_Time = FTime;
			}
		void setAllFullTimeEmployee(string position,double salary,string FTime)
		    {
		       this->position = position ;
			   this->salary	= salary ;
			   this->Full_Time = FTime;
			}
  	    void setAll(int id,string name,string position,double salary,string FTime)
  	        {
  	        	this->id = id ;
  	        	this->name = name;
  	        	this->position = position;
  	        	this->salary = salary ;
  	        	this->Full_Time = FTime;
			}
  	    void displayFullTime(int n)
  	        {
  	     	    cout<<"\nStaff"<<n<<""<<endl;
  	     	    cout<<"\n\t\t"<<"Id           :"<<this->id<<endl;
  	        	cout<<"\n\t\t"<<"Name         :"<<this->name<<endl;
  	        	cout<<"\n\t\t"<<"Position     :"<<this->position<<endl;
  	        	cout<<"\n\t\t"<<"Salary       :"<<this->salary<<"$"<<endl;
  	        	cout<<"\n\t\t"<<"Full Time    :"<<this->Full_Time<<"h"<<endl;
       	    }
       	static void HeaderFullTime()
         	{
       	    	cout<<"\n\t"<<"\n\t\t__Full Time Jobe__\n\n";
	        }
};
class PartTime:public Employee
{
  	private:
  		string working_Time;
  		string P_position;
  		double P_salary;
  		string Time;
  		
  	public:
  		void setP_position(string P_position)
  		  {
  		  	this->P_position = P_position;
		  }
		void setP_salary(double salary)
		   {
		   	this->P_salary = P_salary;
		   }
  		void setWorking_Time(string working_Time)
  		   {
  		   	 this->working_Time = working_Time ;
		   }
  		 void setTime(string Time)
  		    {
  		    	this->Time = Time ;
			}
  	    void setPartTime(string working_Time,string Time,string P_position,double P_salary)
  	        {
  	           this->working_Time = working_Time ;
			   this->Time = Time ;
			   this->P_position = P_position;
			   this->P_salary = P_salary;
			}
  	    void setAllPartTime(int id,string name,string working_Time,string Time,string P_position,double P_salary)
  	        {
  	          	this->id = id ;
  	        	this->name = name;
				this->working_Time = working_Time ;
				this->P_position = P_position;
			    this->P_salary = P_salary;
			    this->Time = Time ;	
		    }
  	    void displayPartTime(int n)
  	     {
  	     	cout<<"\nStaff"<<n<<endl;
  	     	cout<<"\n\t\t"<<"Id           :"<<this->id<<endl;
  	     	cout<<"\n\t\t"<<"Name         :"<<this->name<<endl;
  	     	cout<<"\n\t\t"<<"Working Time :"<<this->working_Time<<endl;
  	     	cout<<"\n\t\t"<<"Position     :"<<this->P_position<<endl;
  	     	cout<<"\n\t\t"<<"Part Time    :"<<this->Time<<"h"<<endl;
  	      	cout<<"\n\t\t"<<"Salary       :"<<this->P_salary<<"$"<<endl;
       	}
       	static void Header()
       	{
        	cout<<"\n\t"<<"\n\n\t\t__Part Time Job__\n\n";	
	    }
};  
int main()
{
  	FullTimeEmployee A1,A2;
  	A1.setId(101);
  	A1.setName("Hong Chanheng");
  	A1.setPosition("iOS Developer");
  	A1.setSalary(1000);
  	A1.setFull_Time("7:30-4:50");
  	
  	A2.setAll(102,"Tuy Muy","Accounting",1000,"7:30-4:50");
    FullTimeEmployee::HeaderFullTime();
    A1.displayFullTime(1);
    A2.displayFullTime(2);

  	PartTime a1,a2;
  	a1.setId(202);
  	a1.setName("Ta La");
  	a1.setPartTime("Morning","7:30-11:00","IT Support",1000);
  	
  	a2.setAllPartTime(10002,"Pa La","Evening","1:00-4:50","Accounting",1000);
  	PartTime::Header();
  	a1.displayPartTime(1);
  	a2.displayPartTime(2);
  	
  	getch();
  	return 0;
}
  
  
  
  
  
  
  
  
  
  
