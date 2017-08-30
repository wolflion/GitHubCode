// 20170829

// 声明复数的类Complex，使用友元函数add实现复数加法。
#include <iostream>
using namespace std;

class Complex
{
public:
	Complex()
	{
	}
	Complex(double a, double b) // 带参构造函数
	{
		real = a;
		image = b;
	}
	void setdata(double a, double b)  // 设置数据成员值
	{
		real = a;
		image = b;
	}
	double getReal()  // 求底部
	{
		return real;
	}
	double getImage() // 求虚部
	{
		return image;
	}

	void disp()  // 输出一个复数
	{
		if (image > 0)
			cout << "复数：" << real << "+" << image << "i" << endl;
		if (image < 0)
			cout << "复数：" << real << "-" << -image << "i" << endl;
	}
    friend Complex add(Complex, Complex);  // 声明友元函数
	~Complex()
	{
	}

private:
	double real, image;
};

//Complex Complex::add(Complex c1, Complex c2)
//{
//	Complex c3;
//	c3.real = c1.real + c2.real;
//	c3.image = c1.image + c2.image;
//	return c3;
//}
// 如果没有friend关键字，其实和上面代码一样用类的成员函数是一样可以实现的。
Complex add(Complex c1, Complex c2) // 定义友元函数
{
	Complex c3;
	c3.real = c1.real + c2.real;  // 访问Complex类中的私有成员
	c3.image = c1.image + c2.image;
	return c3;
}

int main()
{
	Complex c1(2, 5), c2, c3;
	c2.setdata(-6, -2);
	c3 = add(c1, c2);
	cout << "复数1："; c1.disp();
	cout << "复数2："; c2.disp();
	cout << "复数3："; c3.disp();
	system("pause");
	return 0;
}