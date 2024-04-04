#include<iostream>
using namespace std;

class student
{
	private:
		string name;
		int rollno;
		string grade;
	public:
		void inputdata()
		{
			cout<<"Enter name\n";
			cin>>name;
			cout<<"Enter roll number\n";
			cin>>rollno;
			cout<<"Enter grade\n";
			cin>>grade;
		}
		void printdata()
		{
			cout<<"Name: "<<name<<"\n";
			cout<<"Roll number: "<<rollno<<"\n";
			cout<<"Grade: "<<grade<<"\n";
		}
};

int main()
{
	student test;
	test.inputdata();
	test.printdata();
	return 0;
}
