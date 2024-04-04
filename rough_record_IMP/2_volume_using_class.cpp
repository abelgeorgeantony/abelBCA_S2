#include<iostream>
using namespace std;

class Shape
{
	private:
		float volume;
	public:
		float vol(float);
		float vol(float, float, float);
		float vol(float, float);
};
float Shape::vol(float side)
{
	volume = side * side * side;
	return volume;
}
float Shape::vol(float len, float bre, float hgt)
{
	volume = len * bre * hgt;
	return volume;
}
float Shape::vol(float rad, float hgt)
{
	const float PI = 3.14;
	volume = (PI * (rad * rad) * hgt)/3;
	return volume;
}

int main()
{
	Shape obj;
	int s, l, b, h, r;
	cout<<"Enter side of Cube:\n";
	cin>>s;
	cout<<"Volume of Cube: "<<obj.vol(s);
	cout<<"\n\nEnter length, breadth and height of Cuboid:\n";
	cin>>l>>b>>h;
	cout<<"Volume of Cuboid: "<<obj.vol(l,b,h);
	cout<<"\n\nEnter radius and height of Cone:\n";
	cin>>r>>h;
	cout<<"Volume of Cone:"<<obj.vol(r,h);
	return 0;
}
