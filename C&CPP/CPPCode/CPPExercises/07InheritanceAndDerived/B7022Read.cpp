// 2017-09-06
// 例7.22 程序的输出结果

#include <iostream>
using namespace std;
class A
{
public:
	A(int i)
	{
		cout << i;
	}
	~A()
	{}
};

class B:virtual public A
{
public:
	B(int i,int j=0):A(j)
	{
		cout << i;
	}
	~B()
	{}
};

class C:virtual public A
{
public:
	C(int i,int j=0):A(j)
	{
		cout << i;
	}
	~C()
	{}
};

class D:public C,public B
{
	C obj2;
	B obj1;
public:
	D(int a, int b,int c,int d):obj1(a),obj2(b),B(c),C(d),A(a)
	{
		cout << b;
	}
};

int main()
{
	D d(1,2,3,4);  // 14302012
	/*
	D d(1,2,3,4) 调用顺序为 A(1) 【输出1】、C(4)、A(0)、C(4,0)
	由于A是虚基类其构造函数仅执行一次，【输出4】 B(3) A(0),B(3,0)
	由于已执行A的构造函数，不再执行，【输出3】

	对于子对象调用构造函数的顺序为：obj2(2)，执行A(0)和C(2,0) 【输出0,2】
	obj1(1)执行A(0)和B(1,0) 【输出0，1】

	最后执行D的构造函数 【输出2】
	*/
	system("pause");
	return 0;
}