#include<iostream>
using namespace std;
class data_b;
class data_a
{
	private:
		int pdata;
	public:
		friend void swap(data_a &, data_b &);
		data_a()
		{
			cout<<"Enter data of class a:";
			cin>>pdata;
		}
		void print()
		{
			cout<<"class a: "<<pdata<<"\n";
		}
};
class data_b
{
	private:
		int pdata;
	public:
		friend void swap(data_a &, data_b &);
		data_b()
		{
			cout<<"Enter data of class b:";
			cin>>pdata;
		}
		void print()
		{
			cout<<"class b: "<<pdata<<"\n";
		}
};

void swap(data_a &a, data_b &b)
{
	int temp;
	temp = a.pdata;
	a.pdata = b.pdata;
	b.pdata = temp;
	
}

int main()
{
	data_a a_obj;
	data_b b_obj;
	cout<<"Data before swap:\n";
	a_obj.print();
	b_obj.print();
	swap(a_obj, b_obj);
	cout<<"Data after swap:\n";
	a_obj.print();
	b_obj.print();
}
