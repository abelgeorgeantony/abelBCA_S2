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
		friend time sumtime(time , time );
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
time sumtime(time t1, time t2)
{
	time temp;
	temp.minute = t1.minute + t2.minute;
	temp.hour = temp.minute/60;
	temp.minute = temp.minute%60;
	temp.hour = temp.hour + t1.hour + t2.hour;
	return temp;
}

int main()
{
	time t1, t2, t3;
	t1.read();
	t2.read();
	t3 = sumtime(t1,t2);
	t3.print();
	return 0;
}
