/*
 * 分析程序结果
 */

#include <iostream>
using namespace std;

class A
{
public:
	A()
	{
		cout<<"Constructing A\n";
	}
	~A()
	{
		cout<<"Destructing A\n";
	}
};

class B
{
public:
	B()
	{
		cout<<"Constructing B\n";
	}
	~B()
	{
		cout<<"Destructing B\n";
	}
};

class C:public A,public B
{
public:
	C()
	{
		cout<<"Constructing C\n";
	}
	~C()
	{
		cout<<"Destructing C\n";
	}
};

int main()
{
	C ob;//创建顺序ABC，析构顺序是CBA
	system("pause");
	return 0;
}