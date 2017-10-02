// 2017-09-28
#include <iostream>
#include <math.h>
using namespace std;


double dsqrt(double d)
{
	if (d < 0)
		throw 1;
	return sqrt(d);
}

int main()
{
	int x;
	while (1)
	{
		cout << "输入一正数：";
		cin >> x;
		try
		{
			cout << dsqrt(x) << endl;
		}
		catch (int)
		{
			cout << "负数不能求平方根" << endl;
			if (x<0)
				break;
		}
	}
}