#include<iostream>
using namespace std;

class Student
{
	protected:
		int rollno;
		string name;
		long long int parentnum;
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
void Student::putdata()
{
	cout<<"\nRoll number: "<<rollno<<"\nName: "<<name<<"\nPhone number of parent: "<<parentnum;
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
			cout<<"\nSubject 1: "<<sub1<<"\nSubject 2: "<<sub2;
		}
};

class Result:public Test
{
	private:
		int totalmark;
	public:
		void calculatetotal()
		{
			totalmark = sub1 + sub2;
		}
		void display()
		{
			putdata();
			putmarks();
			cout<<"\nTotal marks: "<<totalmark;
		}
};

int main()
{
	Result r;
	r.getdata();
	r.getmarks();
	r.calculatetotal();
	r.display();
	return 0;
}
