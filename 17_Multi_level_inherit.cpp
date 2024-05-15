#include<iostream>
#include<string>
using namespace std;

class Person
{
	protected:
		string name;
		string address;
		long long int phone_number;
};

class Employee: public Person
{
	protected:
		int emp_number;
};

class Manager: public Employee
{
	protected:
		string designation;
		string department;
		int base_salary;
	public:
		void read();
		void print();
};
void Manager::read()
{
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter address: ";
	cin.ignore();
	getline(cin,address);
	cin>>address;
	cout<<"Enter phone number: ";
	cin>>phone_number;
	cout<<"Enter employee number: ";
	cin>>emp_number;
	cout<<"Enter designation: ";
	cin>>designation;
	cout<<"Enter department: ";
	cin>>department;
	cout<<"Enter base salary: ";
	cin>>base_salary;
}
void Manager::print()
{
	cout<<"\nName: "<<name;
	cout<<"\nAddress: "<<address;
	cout<<"\nPhone number: "<<phone_number;
	cout<<"\nEmployee number: "<<emp_number;
	cout<<"\nDesignation: "<<designation;
	cout<<"\nDepartment: "<<department;
	cout<<"\nBase salary: "<<base_salary;
	cout<<"\n";
}

int main()
{
	int n;
	cout<<"Enter the number of managers:\n";
	cin>>n;
	Manager m[n];
	for(int i = 0; i < n; i++)
	{
		cout<<"Enter details of "<<i+1<<"th manager:\n";
		m[i].read();
	}
	cout<<"\n\n";
	for(int i = 0; i < n; i++)
	{
		cout<<"Details of "<<i+1<<"th manager:";
		m[i].print();
	}
}
