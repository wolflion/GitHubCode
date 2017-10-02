// 2017-09-28
#include <iostream>
using namespace std;

class Complex
{
public:
	Complex()   // 默认构造函数
	{
		real = 0;
		imag = 0;
	}
	Complex(double r)  // 转换构造函数
	{
		real = r;
		imag = 0;
	}
	Complex(double r, double i)  // 实现初始化的构造函数
	{
		real = r;
		imag = i;
	}
	friend Complex operator+ (Complex c1, Complex c2); // 重载运算符“+”的友元函数
	void display();

private:
	double real;
	double imag;
};

Complex operator+(Complex c1, Complex c2)  // 定义运算符“ + ”的友元函数
{
	return Complex(c1.real + c2.real, c1.imag + c2.imag);
}

void Complex::display()
{
	cout << "(" << real << "," << imag << "i)" << endl;
}

int main()
{
	Complex c1(3, 4), c2(5, -10), c3;
	c3 = c1 + 2.5;     // 复数与double数据相加
	c3.display();
	system("pause");
	return 0;
}