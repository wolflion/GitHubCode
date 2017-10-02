// 2017-09-28
#include <iostream>
using namespace std;

class Complex
{
public:
	Complex()
	{
		real = 0;
		imag = 0;
	}
	Complex(double r,double i)
	{
		real = r;
		imag = i;
	}
	operator double(){ return real; } // 类型转换函数

private:
	double real;
	double imag;
};

int main()
{
	Complex c1(3, 4), c2(5, -10), c3;
	double d;
	d = 2.5 + c1; // 要求将一个double数据与Complex类数据相加 
	cout << d << endl;
	system("pause");
	return 0;
}