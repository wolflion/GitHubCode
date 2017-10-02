// 2017-09-25

#include <iostream>
using namespace std;

// 复数类
class complex
{
private:
	double real, imag;   // 复数的实部和虚部
public:
	// 声明友元
	//friend complex& operator+(const complex&c1, const complex &c2);
	friend complex operator+(const complex&c1, const complex &c2);
	// 构造函数
	complex(double r = 0, double i = 0)
	{
		real = r;
		imag = i;
	}
	// 显示复数的成员函数
	void display_Clx();
};

void complex::display_Clx()
{
	if (imag >= 0)
	{
		cout << real << "+i" << imag << endl;
	}
	else
	{
		cout << real << "-i" << imag << endl;
	}
}

// 重载的加法运算符
//complex& operator+(const complex& c1, const complex& c2)
complex operator+(const complex& c1, const complex& c2)
{
	complex c;
	c.real = c1.real + c2.real;
	c.imag = c1.imag + c2.imag;
	return c;  //waring C4172，https://stackoverflow.com/questions/19371137/c-reference-to-local-variable-returned
}

int main()
{
	complex c1(1, 8), c2(3, -6), c3;
	c3 = c1 + c2;
	c3.display_Clx();
	system("pause");
	return 0;
}