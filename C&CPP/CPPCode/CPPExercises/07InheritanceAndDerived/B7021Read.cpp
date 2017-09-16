// 2017-09-06
// 7.21 以下程序的输出结果

#include <iostream>
using namespace std;

class A
{
	int x;
public:
	A(int i)
	{
		x = i;
	}
	void dispa()
	{
		cout << x << ",";
	}
};

class B:public A
{
	int x;
public:
	B(int i):A(i+10)
	{
		x = i;
	}
	void dispb()
	{
		dispa();
		cout << x << endl;
	}
};

int main()
{
	B b(2); // 类B的构造函数以 A(12)调用A的构造函数，所以输出12,2
	b.dispb();
	system("pause");
	return 0;
}