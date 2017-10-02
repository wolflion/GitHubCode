// 2017-09-29
#include <iostream>
#include <cmath>

using namespace std;
int main()
{
	double triangle(double, double, double);
	double a, b, c;
	cin >> a >> b >> c;
	// 在try块中包含要检查的函数
	try
	{
		while (a>0&&b>0&&c>0)
		{
			cout << triangle(a, b, c) << endl;
			cin >> a >> b >> c;
		}
	}
	// 用catch捕捉异常信息并作相应处理
	catch (double)
	{
		cout << "a=" << a << ",b=" << b << ",c=" << c << ",this is not a triangle!" << endl;
	}
	cout << "end" << endl;
	system("pause");
	return 0;
}

double triangle(double a, double b, double c)
{
	double s = (a + b + c) / 2;
	if (a + b <= c || b + c <= a || c + a <= b)
		throw a;
	return sqrt(s*(s - a)*(s - b)*(s - c));
}