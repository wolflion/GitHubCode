/*
 * 编写round()，用于对浮点数进行四舍五入。被四舍五入的值通过引用参数进行传递
 */

#include <iostream>
#include <math.h>
using namespace std;

void round(double& num); // 通过引用参数
int main()
{
	double d = 245.4;
	cout<<d<<"rounded is";
	round(d);
	cout<<d<<"\n";
	d = 56.9;
	cout<<d<<"rounded is";
	round(d);
	cout<<d<<"\n";
	system("pause");
	return 0;
}

void round(double& num)
{
	double fac;
	double val;
	fac = modf(num, &val); // modf()用于将一个数分解为整数部分与小数部分
	if (fac < 0.5)
	{
		num = val;
	}
	else
	{
		num = val + 1.0;
	}
}
