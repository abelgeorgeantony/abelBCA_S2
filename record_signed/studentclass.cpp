#include<iostream>
using namespace std;

class Student
{
	private:
		string name;
		int rollno;
		string grade;
	public:
		void input();
		void print();
};

void Student::input()
{
	cout<<"\nEnter the name of the student:\n";
	cin>>name;
	cout<<"Enter the roll number:\n";
	cin>>rollno;
	cout<<"Enter grade of student:\n";
	cin>>grade;
}
void Student::print()
{
	cout<<"\n------------------------------\n";
	cout<<"Name: "<<name<<"\n";
	cout<<"Roll number: "<<rollno<<"\n";
	cout<<"Grade: "<<grade<<"\n";
	cout<<"------------------------------\n";
}

int main()
{
	int i = 0;
	Student students[3];
	for(i = 0; i < 3; i++)
	{
		students[i].input();
	}
	for(i = 0; i < 3; i++)
	{
		students[i].print();
	}
	return 0;
}
