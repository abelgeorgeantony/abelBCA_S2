#include<iostream>
using namespace std;

class account
{
	protected:
		long int ac_number;
		string cust_name;
		int cust_age;
	public:
		void readAc()
		{
			cout<<"Enter Account number: ";
			cin>>ac_number;
			cout<<"Enter name: ";
			cin>>cust_name;
			cout<<"Enter age: ";
			cin>>cust_age;
		}
		void displayAc()
		{
			cout<<"\nAccount number: "<<ac_number;
			cout<<"\nName: "<<cust_name;
			cout<<"\nAge: "<<cust_age<<"\n";
		}
};
class loan
{
	protected:
		long int loan_no;
		string loan_date;
		long int amount;
	public:
		void readLoan()
		{
			cout<<"Enter loan number: ";
			cin>>loan_no;
			cout<<"Enter loan date: ";
			cin>>loan_date;
			cout<<"Enter loan amount: ";
			cin>>amount;
		}
		void displayLoan()
		{
			cout<<"Loan number: "<<loan_no<<"\nLoan date: "<<loan_date<<"\nLoan amount: "<<amount;
		}
};
class payment:public account, public loan
{
	private:
		int rec_no;
		string pay_date;
		int Amount;
	public:
		void readpay()
		{
			cout<<"Enter Record number:";
			cin>>rec_no;
			cout<<"Enter payment date:";
			cin>>pay_date;
			cout<<"Enter payment amount: ";
			cin>>Amount;
			loan::amount = loan::amount - Amount;
		}
		void displaypay()
		{
			cout<<"Record number: "<<rec_no<<"\nPayment date: "<<pay_date<<"\nPayment amount: "<<Amount<<"\n";
		}
};

int main()
{
	payment p;
	p.readAc();
	p.readLoan();
	p.readpay();
	
	cout<<"\n\nUpdated loan details after payment:";
	p.displayAc();
	p.displayLoan();
}
