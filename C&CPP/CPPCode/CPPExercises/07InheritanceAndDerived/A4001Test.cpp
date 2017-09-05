// 20170905，但2017-01-12写过
// chap4 继承与派生
// 4-1 分析下面程序的运行结果

##include <iostream>
using namespace std;
class A
{
public:
	A()
	{cout << "Constructing A\n";}
	~A()
	{cout << "Destructing A\n";}
};

class B
{
public:
	B()
	{cout << "Constructing B\n";}
	~B()
	{cout << "Destructing B\n";}
};

class C:public A, public B
{
public:
	C()
	{cout << "Constructing C\n";}
	~C();
	{cout << "Destructing C\n";}
};

int main()
{
	C ob;  // 先构造ABC,再析构CBA
	return 0;
}
