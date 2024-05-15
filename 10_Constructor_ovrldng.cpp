#include<iostream>
using namespace std;

class BankAccount
{
	private:
		string holdername;
		int balance;
	public:
		BankAccount(string n)
		{
			holdername = n;
		}
		BankAccount(int b)
		{
			balance = b;
		}

		void printname()
		{
			cout<<"\nThe name of the Account holder: "<<holdername<<"\n";
		}
		void printbalance()
		{
			cout<<"\nThe current balance: "<<balance<<"\n";
		}
};
int main()
{
	BankAccount b1("John"), b2(1000);
	cout<<"Calling print function of \'b1\':";
	b1.printname();
	cout<<"\nCalling print function of \'b2\'";
	b2.printbalance();
}
