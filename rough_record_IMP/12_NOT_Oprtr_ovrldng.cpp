#include<iostream>
using namespace std;

class Complex
{
        private:
                int real, ireal;
		char symbol;
        public:
                void read()
                {
			cout<<"Enter real part: ";
			cin>>real;
			cout<<"Enter symbol: ";
                        cin>>symbol;
			cout<<"Enter real part of imaginary part: ";
			cin>>ireal;
                }
                string get()
                {
                        return to_string(real)+symbol+"i"+to_string(ireal);
                }
                friend Complex operator !(Complex &);
};


Complex operator !(Complex &c)
{
        Complex conjugate;
        conjugate.real = c.real;
	conjugate.ireal = c.ireal;
	if(c.symbol == '+')
		conjugate.symbol = '-';
	else
		conjugate.symbol = '+';
        return conjugate;
}


int main()
{
        Complex C1, C2;
	cout<<"Enter a complex number:\n";
	C1.read();
	C2 = !C1;
        cout<<"\nConjugate of "<<C1.get()<<" = "<<C2.get()<<"\n";
        return 0;
}
