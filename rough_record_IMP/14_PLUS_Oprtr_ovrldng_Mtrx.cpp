#include<iostream>
using namespace std;

class Matrix
{
	private:
		int *data;
		int rows, cols;
	public:
		Matrix(int r, int c)
		{
			data = (int*)malloc((r*c)*sizeof(int));
			rows = r;
			cols = c;
		}
		void insertdata();
		void printdata();
		friend Matrix operator +(Matrix &, Matrix &);
};
void Matrix::insertdata()
{
	cout<<"Enter matrix data:\n";
	for(int i = 0; i < rows; i++)
	{
		for(int j = 0; j < cols; j++)
        	{
			cin>>data[(i*cols)+j];
        	}
	}
}
void Matrix::printdata()
{
        cout<<"\nData:\n";
        for(int i = 0; i < rows; i++)
        {
                for(int j = 0; j < cols; j++)
                {
                        cout<<data[(i*cols)+j]<<" ";
                }
		cout<<"\n";
        }
}

Matrix operator +(Matrix &m1, Matrix &m2)
{
	Matrix sum(m1.rows,m1.cols);
	for(int i = 0; i < sum.rows; i++)
        {
                for(int j = 0; j < sum.cols; j++)
                {
			sum.data[(i*sum.cols)+j] = m1.data[(i*sum.cols)+j] + m2.data[(i*sum.cols)+j];
                }
        }
	return sum;
}



int main()
{
	int d1, d2;
	cout<<"Enter dimensions of matrices:\n";
	cin>>d1>>d2;
	Matrix M1(d1,d2), M2(d1,d2), M3(d1,d2);
	cout<<"Matrix 1:\n";
	M1.insertdata();
	cout<<"Matrix 2:\n";
	M2.insertdata();
	M3 = M1 + M2;
	cout<<"\nSum of both matrices-";
	M3.printdata();
	return 0;
}
