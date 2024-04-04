#include<iostream>
using namespace std;

class Number
{
	private:
		int a, b;
		int add();
	public:
		void get(int p, int q);
		void avg();
};

void Number::get(int p, int q)
{
	a = p;
	b = q;
}
int Number::add()
{
	return (a+b);
}
void Number::avg()
{
	cout<<"Average: "<<(float)add()/2;
}

int main()
{
	int t, h;
	cout<<"Enter 2 numbers:\n";
	cin>>t>>h;
	
	Number n;
	n.get(t,h);
	n.avg();
}
