#include<iostream>
using namespace std;

class Student
{
	protected:
		int rollno;
		string name;
		long int parentnum;
	public:
		void getdata();
		void putdata();
};

void Student::getdata()
{
	cout<<"Enter roll number: ";
	cin>>rollno;
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter phone number of parent: ";
	cin>>parentnum;
}
void Student::getdata()
{
	cout<<"Enter roll number: ";
	cin>>rollno;
	cout<<"Enter name: ";
	cin>>name;
	cout<<"Enter phone number of parent: ";
	cin>>parentnum;
}

class Test:public Student
{
	protected:
		int sub1;
		int sub2;
	public:
		void getmarks()
		{
			cout<<"Enter 2 marks:";
			cin>>sub1>>sub2;
		}
		void putmarks()
		{
			cout<<"Subject 1: "<<sub1<<"\nSubject 2: "<<sub2<<"\n";
		}
};
