#include<iostream>
using namespace std;

class student
{
	protected:
		string name;
		int rollnum;
	public:
		void read()
		{
			cout<<"Enter Name: ";
			cin>>name;
			cout<<"Enter Roll number: ";
			cin>>rollnum;
		}
		void print()
		{
			cout<<"Name: "<<name;
			cout<<"\nRoll number: "<<rollnum<<"\n";
		}
};
class test: public student
{
	protected:
		int sub1;
		int sub2;
	public:
		void read()
		{
			cout<<"Enter mark of subject 1: ";
			cin>>sub1;
			cout<<"Enter mark of subject 2: ";
			cin>>sub2;
		}
		void print()
		{
			cout<<"Subject 1: "<<sub1;
			cout<<"\nSubject 2: "<<sub2<<"\n";
		}
};
class sports
{
	protected:
		int score;
	public:
		void read()
		{
			cout<<"Enter Sports score: ";
			cin>>score;
		}
		void print()
		{
			cout<<"Sports score: "<<score;
		}
};

class result: public test, public sports
{
	private:
		int total;
	public:
		void findtotal()
		{
			total = test::sub1+test::sub2+sports::score;
		}
		void print()
		{
			cout<<"\nTotal marks = "<<total<<"\n";
		}
};

int main()
{
	result r;
	r.student::read();
	r.test::read();
	r.sports::read();
	r.findtotal();
	r.print();
}
