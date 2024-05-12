#include<iostream>
using namespace std;

float perimeter(float side)
{
	return (4*side);
}
float perimeter(float len, float bre)
{
	return (2*(len+bre));
}
float perimeter(float s1, float s2, float s3)
{
	return (s1+s2+s3);
}

int main()
{
	int s, l, b, s_1,s_2,s_3;
	cout<<"Enter side of Square:\n";
	cin>>s;
	cout<<"Perimeter of Square: "<<perimeter(s);
	cout<<"\n\nEnter length and bredth of Rectangle:\n";
	cin>>l>>b;
	cout<<"Perimeter of Rectangle:"<<perimeter(l,b);
	cout<<"\n\nEnter all 3 sides of Triangle:\n";
	cin>>s_1>>s_2>>s_3;
	cout<<"Perimeter of Triangle: "<<perimeter(s_1,s_2,s_3);
	return 0;
}
