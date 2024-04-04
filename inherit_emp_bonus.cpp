#include<iostream>
using namespace std;

class employee
{
	protected:
		int emp_id;
		string emp_name;
		int salary;
	public:
		void read();
		void print();
};
void employee::read()
{
	cout<<"\nEnter ID:";
	cin>>emp_id;
	cout<<"Enter name:";
	cin>>emp_name;
	cout<<"Enter base salary:";
	cin>>salary;
	cout<<"\n";
}
void employee::print()
{
	cout<<"\n";
	cout<<"ID:"<<emp_id<<"\n";
	cout<<"Name:"<<emp_name<<"\n";
	cout<<"Salary:"<<salary;
	cout<<"\n";
}
class Bonus:public employee
{
	private:
		int incr;
	public:
		void read_incr(int i)
		{
			incr = i;
		}
		void increment()
		{
			salary = salary + incr;
		}
};

int main()
{
	Bonus bemp;
	bemp.read();
	int inc;
	cout<<"Enter increment to give:";
	cin>>inc;
	bemp.read_incr(inc);
	cout<<"\nEmployee before increment:";
	bemp.print();
	bemp.increment();
	cout<<"\nEmployee after increment:";
	bemp.print();
	return 0;
}
