#include<iostream>
using namespace std;
class complex
{
	private:
		int real, imag;
	public:
		void read(int x, int y)
		{
			real = x;
			imag = y;
		}
		void print()
		{
			cout<<real<<"+"<<imag<<"i\n";
		}
		friend void operator +(complex &, complex &);
};
void operator +(complex &obj1,complex &obj2)
{
	obj1.real = obj1.real + obj2.real;
	obj1.imag = obj1.imag + obj2.imag;
}
int main()
{
	complex c1, c2;
	c1.read(3,6);
	c2.read(4,2);
	cout<<"Before addition:\n";
	c1.print();
	c2.print();
	c1+c2;
	cout<<"After addition:\n";
	c1.print();
}
