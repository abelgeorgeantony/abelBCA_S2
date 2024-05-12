#include<iostream>
using namespace std;

class Student
{
	private:
		string name;
		int appl_num;
		float pom;
	public:
		void input();
		void print();
};

void Student::input()
{
	cout<<"\nEnter Name:";
	cin>>name;
	cout<<"Enter Application number:";
	cin>>appl_num;
	cout<<"Enter Percentage of mark:";
	cin>>pom;
	cout<<"\n";
}
void Student::print()
{
	cout<<"\n------------------------------\n";
	cout<<"Name: "<<name<<"\n";
	cout<<"Application number : "<<appl_num<<"\n";
	cout<<"Percentage of mark: "<<pom<<"\n";
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
	cout<<"Details of all students:";
	for(i = 0; i < 3; i++)
	{
		students[i].print();
	}
	return 0;
}
