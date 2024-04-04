#include<iostream>
using namespace std;

float interest(int years, int principal, float interestrate = 7.5)
{
	return ((years * principal * interestrate)/100);
}

int main()
{
	int a, b;
	cout<<"Enter Principal Amount:\n";
	cin>>a;
	cout<<"Enter Number of years:\n";
	cin>>b;
	cout<<"Interest amount: "<<interest(a,b);
	return 0;
}
