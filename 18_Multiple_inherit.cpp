#include<iostream>
using namespace std;

class student
{
	protected:
		int stud_id;
		string stud_name;
		int stud_age;
	public:
		void readstud()
		{
			cout<<"Enter student ID: ";
			cin>>stud_id;
			cout<<"Enter name: ";
			cin>>stud_name;
			cout<<"Enter age: ";
			cin>>stud_age;
		}
		void displaystud()
		{
			cout<<"\nStudent ID: "<<stud_id;
			cout<<"\nName: "<<stud_name;
			cout<<"\nAge: "<<stud_age<<"\n";
		}
};
class course
{
	protected:
		string course_name;
		string department;
	public:
		void readcourse()
		{
			cout<<"Enter course: ";
			cin>>course_name;
			cout<<"Enter department: ";
			cin>>department;
		}
		void displaycourse()
		{
			cout<<"\nCourse: "<<course_name<<"\n";
			cout<<"\nDepartment: "<<department<<"\n";
		}
};
class admission:public student, public course
{
	private:
		int adm_no;
		string adm_date;
	public:
		void readadm()
		{
			cout<<"Enter admission number:";
			cin>>adm_no;
			cout<<"Enter admission date:";
			cin>>adm_date;
		}
		void displayadm()
		{
			cout<<"\nAdmission number: "<<adm_no;
			cout<<"\nAdmission date:"<<adm_date<<"\n";
		}
};

int main()
{
	admission adm;
	adm.readstud();
	adm.readcourse();
	adm.readadm();
	
	adm.displaystud();
	adm.displaycourse();
	adm.displayadm();
}
