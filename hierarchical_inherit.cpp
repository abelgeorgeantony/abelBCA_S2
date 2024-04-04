#include<iostream>
using namespace std;

class shape
{
	protected:
		float a;
		float b;
	public:
		void read()
		{
			cout<<"\nA: ";
			cin>>a;
			cout<<"B: ";
			cin>>b;
		}
};

class rectangle: public shape
{
	public:
		float area;
		void findarea()
		{
			area = a*b;
		}
};
class triangle: public shape
{
	public:
		float area;
		void findarea()
		{
			area = (a*b)/2;
		}
};

int main()
{
	rectangle r;
	triangle t;
	cout<<"Enter dimensions of rectangle to find area:";
	r.read();
	r.findarea();
	cout<<"Area of rectangle: "<<r.area<<"\n";
	cout<<"\nEnter dimensions of triangle to find area:";
	t.read();
	t.findarea();
	cout<<"Area of triangle: "<<t.area<<"\n";
	return 0;
}
