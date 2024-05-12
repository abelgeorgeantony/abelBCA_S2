#include<iostream>
using namespace std;

struct imaginary
{
	int rnum;
	static char i;
};
char imaginary::i = 'i';
class Complex
{
	private:
		int rnum;
		imaginary inum;
	public:
		void read();
		void print();
		void sum(Complex, Complex);	
};
void Complex::read()
{
	cout<<"Enter real number:";
	cin>>rnum;
	cout<<"Enter real part of imaginary number:";
	cin>>inum.rnum;
}
void Complex::print()
{
	cout<<rnum<<"+"<<inum.rnum<<inum.i;
}
void Complex::sum(Complex c1, Complex c2)
{
	rnum = c1.rnum + c2.rnum;
	inum.rnum = c1.inum.rnum + c2.inum.rnum;
}
int main()
{
	Complex c1, c2, c3;
	c1.read();
	c2.read();
	c3.sum(c1,c2);
	c3.print();
	return 0;
}
