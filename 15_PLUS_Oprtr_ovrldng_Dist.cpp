#include<iostream>
using namespace std;

class Distance
{
	private:
		int km, m;
	public:
		Distance(int x, int y)
		{
			km = x;
			if(y>1000)
			{
				km = km + y/1000;
				y = y%1000;
			}
			m = y;
		}
		void print()
		{
			cout<<km<<"."<<m<<"kms";
		}
		Distance operator +(Distance &);
};
Distance Distance::operator +(Distance &d)
{
	Distance sum(0,0);
	sum.m = m + d.m;
	sum.km = km + d.km + (sum.m/1000);
	if(sum.m>1000)
		sum.m = (int)sum.m%1000;
	return sum;
}

int main()
{
	int k, m;
	cout<<"Enter First distance:\n";
	cout<<"KM: ";
	cin>>k;
	cout<<"M: ";
	cin>>m;
	Distance d1(k,m);
	cout<<"\nEnter Second distance:\n";
    cout<<"KM: ";
    cin>>k;
    cout<<"M: ";
    cin>>m;
 	Distance d2(k,m), d3(0,0);
	d3 = d1 + d2;
	d1.print();
	cout<<" + ";
	d2.print();
	cout<<" = ";
	d3.print();
	return 0;
}
