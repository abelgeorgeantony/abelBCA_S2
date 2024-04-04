#include<iostream>
using namespace std;
class time
{
	private:
		int hour;
		int minute;
	public:
		void read();
		void print();
		void sum(time , time );
};
void time::read()
{
	cout<<"Hour:";
	cin>>hour;
	cout<<"Minute:";
	cin>>minute;
	cout<<"\n";
}
void time::print()
{
	cout<<"Time = "<<hour<<"h:"<<minute<<"m\n";
}
void time::sum(time t1, time t2)
{
	minute = t1.minute + t2.minute;
	hour = minute/60;
	minute = minute%60;
	hour = hour + t1.hour + t2.hour;
}

int main()
{
	time t1, t2, t3;
	t1.read();
	t2.read();
	t3.sum(t1,t2);
	t3.print();
	return 0;
}
