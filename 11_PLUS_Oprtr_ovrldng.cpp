#include<iostream>
using namespace std;

class Time
{
	private:
		int hour, minute, second;
	public:
		void read(int x, int y, int z)
		{
			hour=x;
			minute=y;
			second=z;
		}
		void print()
		{
			cout<<hour<<"hr:"<<minute<<"min:"<<second<<"s";
		}
		Time operator +(Time &);
};

Time Time::operator +(Time &t)
{
	Time temp;
	temp.second = second + t.second;
	temp.minute = minute + t.minute + (temp.second/60);
	if(temp.second>60)
		temp.second = temp.second % 60;
	temp.hour = hour + t.hour + (temp.minute/60);
	if(temp.minute>60)
        temp.minute = temp.minute % 60;
    if(temp.hour>24)
    	temp.hour = temp.hour % 24;
	return temp;
}


int main()
{
	Time T1,T2,T3;
	int a, b, c;
	cout<<"Enter First time:\n";
	cout<<"Hour: ";
	cin>>a;
	cout<<"Minute: ";
    cin>>b;
	cout<<"Second: ";
    cin>>c;
	T1.read(a,b,c);
	cout<<"\nEnter Second time:\n";
    cout<<"Hour: ";
    cin>>a;
    cout<<"Minute: ";
    cin>>b;
    cout<<"Second: ";
    cin>>c;
	T2.read(a,b,c);
	T3 = T1 + T2;
	cout<<"\n";
	T1.print();
	cout<<" + ";
	T2.print();
	cout<<" = ";
	T3.print();
	cout<<"\n";
	return 0;
}
