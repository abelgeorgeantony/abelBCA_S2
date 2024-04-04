#include<iostream>
using namespace std;
class number
{
	private:
		int m,n;
	public:
		void read();
		int largest();
		void display();
};
void number::read()
{
	cout<<"\nEnter 2 values";
	cin>>m>>n;
}
int number::largest()
{
	if(m > n)
	{
		return m;
	}
	else if(m < n)
	{
		return n;
	}
	else
	{
		return 0;
	}
}
void number::display()
{
	if(largest() != 0)
	{
		cout<<"Largest number: "<<largest();
	}
	else
	{
		cout<<"BOTH NUMBERS ARE EQUAL";
	}
}

int main()
{
	number test;
	test.read();
	test.display();
}


