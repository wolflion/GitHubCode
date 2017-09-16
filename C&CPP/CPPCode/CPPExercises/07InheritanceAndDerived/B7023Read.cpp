// 2017-09-06
// 例7.23 以下程序的执行结果

#include <iostream>
using namespace std;

class A
{
	int a;
public:
	void seta(int x)
	{
		a = x;
	}
	void showa()
	{
		cout << a << endl;
	}
};

class B
{
	int b;
public:
	void setb(int x)
	{
		b = x;
	}
	void showb()
	{
		cout << b << endl;
	}
};

class C:public A,private B
{
	int c;
public:
	void setc(int x, int y, int z)
	{
		c = z;
		seta(x);
		setb(y);
	}
	void showc()
	{
		cout << c << endl;
	}
};

int main()
{
	C c;
	c.seta(1);
	c.showa(); // 1
	c.setc(1,2,3);
	c.showc(); // 3
	system("pause");
	return 0;
}