#include<iostream>
using namespace std;

class test
{
	private:
		int x,y,z;
	public:
		void read(int p, int q, int r)
		{
			x = p;
			y = q;
			z = r;
		}
		void show()
		{
			cout<<"\nX :"<<x<<"\tY :"<<y<<"\tZ :"<<z<<"\n";
		}
		
		friend void operator -(test&);
};
void operator -(test &m)
{
	m.x = -(m.x);
	m.y = -(m.y);
	m.z = -(m.z);
}

int main()
{
	test t;
	t.read(10,20,30);
	cout<<"Before overloading:";
	t.show();
	-t;
	cout<<"After overloading:";
	t.show();
	return 0; 
}
