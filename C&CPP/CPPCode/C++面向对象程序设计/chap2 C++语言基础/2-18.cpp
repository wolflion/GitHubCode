/*
 * ��дround()�����ڶԸ����������������롣�����������ֵͨ�����ò������д���
 */

#include <iostream>
#include <math.h>
using namespace std;

void round(double& num); // ͨ�����ò���
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
	fac = modf(num, &val); // modf()���ڽ�һ�����ֽ�Ϊ����������С������
	if (fac < 0.5)
	{
		num = val;
	}
	else
	{
		num = val + 1.0;
	}
}
