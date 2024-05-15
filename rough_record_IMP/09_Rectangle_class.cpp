#include<iostream>
using namespace std;

class Rectangle
{
	private:
		int length;
		int bredth;
	public:
		int area()
		{
			return length*bredth;
		}
		Rectangle(int x)
		{
			length = x;
			bredth = x;
		}
		Rectangle(int x, int y)
		{
			length = x;
			bredth = y;
		}
};

int main()
{
	int x1, x2, x3;
	cout<<"Enter a length: ";
	cin>>x1;
	Rectangle r1(x1);
	cout<<"Area of rectangle: "<<r1.area()<<"\n\n";
	cout<<"Enter length and bredth: ";
	cin>>x2>>x3;
	Rectangle r2(x2,x3);
	cout<<"Area of rectangle: "<<r2.area()<<"\n\n";
}
