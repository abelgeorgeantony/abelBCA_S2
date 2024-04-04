#include<iostream>
using namespace std;

class first
{
	protected:
		int data;
	public:
		void read()
		{
			cout<<"Enter first number: ";
			cin>>data;
		}
		void print()
		{
			cout<<"First number: "<<data;
		}
};
class second
{
	protected:
		int data;
	public:
		void read()
		{
			cout<<"Enter second number: ";
			cin>>data;
		}
		void print()
		{
			cout<<"Second number: "<<data;
		}
};

class calculator:public first, public second
{
	public:
		int add()
		{
			return (first::data+second::data);
		}
		int sub()
		{
			return (first::data-second::data);
		}
		int mul()
		{
			return (first::data*second::data);
		}
		int div()
		{
			return (first::data/second::data);
		}
};

int main()
{
	calculator Calc;
	Calc.first::read();
	Calc.second::read();
	int continuechoice = 1;
	char op;
	do
	{
		cout<<"Enter operator: ";
		cin>>op;
		switch(op)
		{
			case '+':
				cout<<"Sum: "<<Calc.add()<<"\n";
				break;
			case '-':
				cout<<"Difference: "<<Calc.sub()<<"\n";
				break;
			case '*':
				cout<<"Product: "<<Calc.mul()<<"\n";
				break;
			case '/':
				cout<<"Quotient: "<<Calc.div()<<"\n";
				break;
			default:
				cout<<"Invalid operator\n";
				break;
		}
		cout<<"Do you want to keep on calculating?(1=Y,0=N)";
		cin>>continuechoice;
	}while(continuechoice == 1);
	return 0;
}

