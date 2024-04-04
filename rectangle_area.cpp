#include<iostream>
using namespace std;
class Rectangle
{
	private:
		float len;
		float bre;
	public:
		Rectangle(float a)
		{
			len = a;
			bre = a;
		}
		Rectangle(float a, float b)
		{
			len = a;
			bre = b;
		}
		float area()
		{
			return (len*bre);
		}
};
int main()
{
	float side1, side2;
	cout<<"Enter one side:";
	cin>>side1;
	Rectangle square(side1);
	cout<<"Area:"<<square.area();
	cout<<"\nEnter two sides:";
	cin>>side1>>side2;
	Rectangle rec1(side1,side2);
	cout<<"\nArea:"<<rec1.area();
	return 0;
}
