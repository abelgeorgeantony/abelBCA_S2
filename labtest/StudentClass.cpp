#include<iostream>
using namespace std;
class Student
{
	private:
		int apnum;
		string name;
		float POM;
	public:
		void read();
		void print();
};
void Student::read()
{
	cout<<"\nEnter Application number:";
	cin>>apnum;
	cout<<"Enter name:";
	cin>>name;
	cout<<"Enter percentage of mark:";
	cin>>POM;
}
void Student::print()
{
	cout<<"\n\n---------------------------\n";
	cout<<"App number:"<<apnum;
	cout<<"\nName:"<<name;
	cout<<"\nPercentage of mark:"<<POM;
	cout<<"\n---------------------------\n";
}
int main()
{
	int i = 0;
	Student s[4];
	cout<<"Start entering details of students:\n";
	for(i = 0; i < 4; i++)
	{
		s[i].read();
	}
	for(i = 0; i < 4; i++)
	{
		s[i].print();
	}
}
