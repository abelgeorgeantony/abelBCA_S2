#include<iostream>
using namespace std;

float volume(float side)
{
	return side * side * side;
}
float volume(float len, float bre, float hgt)
{
	return len * bre * hgt;
}
float volume(float rad, float hgt)
{
	const float PI = 3.14;
	return PI * (rad * rad) * hgt;
}

int main()
{
	int s, l, b, h, r;
	cout<<"Enter side of Cube:\n";
	cin>>s;
	cout<<"Volume of Cube: "<<volume(s);
	cout<<"\n\nEnter length, breadth and height of Cuboid:\n";
	cin>>l>>b>>h;
	cout<<"Volume of Cuboid: "<<volume(l,b,h);
	cout<<"\n\nEnter radius and height:\n";
	cin>>r>>h;
	cout<<"Volume of Cylinder:"<<volume(r,h);
	return 0;
}
