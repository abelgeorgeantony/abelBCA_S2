#include<iostream>
using namespace std;

void foo(int a, int b)
{
	if((a%b)==0)
	{
		cout<<a<<" is divisible by "<<b"\n";
	}
	else
		cout<<a<<" is not divisible by "<<b"\n";
}
void foo(int num)
{
    int flag = 1; 
    for (int i = 2; i <= num / 2; i++) { 
  
        if (num % i == 0) { 
            flag = 0; 
            break; 
        } 
    } 
    if (flag)
	{
    	cout<<"The number "<<num<<" is a Prime Number\n";
    } 
    else
	{
    	cout<<"The number "<<num<<" is not a Prime Number\n";
    }
}

int main()
{
	int a1, b1, num1;
	cout<<"Enter 2 numbers:\n";
	cin>>a1>>b1;
	foo(a1,b1);
	cout<<"\nEnter a numbers:\n";
	cin>>num1;
	foo(num1);
}
