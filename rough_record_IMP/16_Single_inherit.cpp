#include<iostream>
using namespace std;

class Student
{
	protected:
		int rollno;
		string name;
	public:
		void read();
		void print();
};

void Student::read()
{
	cout<<"Enter roll number: ";
	cin>>rollno;
	cout<<"Enter name: ";
	cin>>name;
}
void Student::print()
{
	cout<<"Roll number: "<<rollno<<"\nName: "<<name<<"\n";
}


class Marks:public Student
{
	protected:
		float pom,sub1,sub2,sub3,tmarks;
	public:
		void read()
		{
			cout<<"Enter 3 marks(each out of 100):";
			cin>>sub1>>sub2>>sub3;
			tmarks = sub1+sub2+sub3;
			pom=(tmarks/300)*100;
		}
		void print()
		{
			cout<<"Subject 1: "<<sub1<<"\nSubject 2: "<<sub2<<"\nSubject 3: "<<sub3<<"\n";
			cout<<"Total marks: "<<tmarks<<"/300\n";
			cout<<"Percentage of mark: "<<(float)pom<<"\n";
		}
};

int main()
{
	Marks m;
	m.Student::read();
	m.Marks::read();
	cout<<"\nEntered details:\n";
	m.Student::print();
	m.Marks::print();
}
