#include<iostream>
#include<conio.h>
#include<iomanip>
using namespace std;
class BankAccount
{
	private:
		int AccountNumber;
		string AccountName;
		double Balance;
	public:
		void setAccountNumber(int Number)
		{
			AccountNumber = Number;
		}
		void setAccountName(string Name)
		{
			AccountName = Name;
		}
		void setBalance(double Balance)
		{
			this->Balance = Balance;
		}
			public:
			
		void Show()
		{
			cout <<setw(15)<<" AccountNumber       :"<<AccountNumber<<endl;
			cout <<setw(15)<<" AccountName         :"<<AccountName<<endl;
			cout <<setw(15)<<" Balance             :"<<Balance<<endl;
			
		}
			
	public:
   //*getter
    int getAccountNumber() const
	{
    	return this-> AccountNumber;

	}
    string getAccountName()	const
    {
    	return this->AccountName;
	}
	double getBalance() const
	{
		return this-> Balance;
	}
	
	public:

	//*setall
		public:
		// set All
		void setInfo(double AccountNumber, string AccountName, int Balance)
		{
		this->	AccountNumber =AccountNumber ;	
	    this->   AccountName =  AccountName    ;
		this-> 	Balance =   Balance;
		}
	public:
		//displayall
		void displayAll()
		{
			cout <<"\t"<<setw(15)<<" AccountNumber           :"<<AccountNumber<<endl;
			cout <<"\t"<<setw(15)<<" AccountName             :"<<AccountName<<endl;
			cout <<"\t"<<setw(15)<<" Balance   ($)           :"<<Balance<<endl;
			
		}
};
int main()
{
     BankAccount	a1;

     a1.setAccountNumber(222333444);
     a1.setAccountName("HONG CHANHENG");
     a1.setBalance(100);

     cout<<"____________________________BankAccount1___________________________\n"<<endl;
     a1.displayAll();
 
     BankAccount   a2;
     a2.setInfo(123456789,"JOHN SON",200);	

      cout<<"___________________________BankAccount 2____________________________\n"<<endl;
      a2.displayAll();	
	
	  getch();
	  return 0;
}
