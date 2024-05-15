#include<iostream>
using namespace std;
class vector
{
	private:
		int a, b, c;
	public:
		void readcoef()
		{
			cout<<"Enter a: ";
			cin>>a;
			cout<<"Enter b: ";
			cin>>b;
			cout<<"Enter c: ";
			cin>>c;
		}
		void print()
		{
			cout<<a<<"i+"<<b<<"j+"<<c<<"k";
		}
		friend vector operator -(vector &, vector &);
};

vector operator -(vector &A, vector &B)
{
	vector temp;
	temp.a = A.a - B.a;
	temp.b = A.b - B.b;
	temp.c = A.c - B.c;
	return temp;
}

int main()
{
	vector v1, v2, v3;
	cout<<"Enter first vector: \n";
	v1.readcoef();
	cout<<"Enter second vector: \n";
	v2.readcoef();
	v3 = v1-v2;
	v1.print();
	cout<<" - ";
	v2.print();
	cout<<" = ";
	v3.print();
}
