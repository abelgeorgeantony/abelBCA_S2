#include<iostream>
using namespace std;

class Student
{
	private:
		string name;
		int age;
		string address;
	public:
		static float average;
		static int cummulativeage;
		void read();
		void display();
		int getAge()
		{
			return age;
		}
};
float Student::average = 0.0;
int Student::cummulativeage = 0;
void Student::read()
{
	cout<<"\nEnter Name: ";
	cin>>name;
	cout<<"Enter Age: ";
	cin>>age;
	Student::cummulativeage = Student::cummulativeage + age;
	cout<<"Enter Address: ";
	cin>>address;
	cout<<"\n";
}
void Student::display()
{
	cout<<"\n------------------------------\n";
	cout<<"Name: "<<name<<"\n";
	cout<<"Age : "<<age<<"\n";
	cout<<"Address : "<<address<<"\n";
	cout<<"------------------------------\n";
}

int main()
{
	int i = 0, tstud = 1;
	cout<<"Enter number of students:";
	cin>>tstud;
	Student students[tstud];
	cout<<"\nEnter details of "<<tstud<<" students:";
	for(i = 0; i < tstud; i++)
	{
		students[i].read();
	}
	Student::average = (float)Student::cummulativeage/tstud;
	cout<<"Details of all students with age greater than the average age:\n";
	cout<<"Average age:"<<Student::average<<"\n";
	for(i = 0; i < tstud; i++)
	{
		if(students[i].getAge() > Student::average)
		{
			students[i].display();
		}
	}
	return 0;
}
