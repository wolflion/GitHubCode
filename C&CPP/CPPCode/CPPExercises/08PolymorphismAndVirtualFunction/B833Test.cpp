// 20170901
// 8.33 ���³����ִ�н��

#include <iostream>
using namespace std;
class A
{
public:
	virtual void fun1()   // �麯������̬����
	{
		cout << "A fun1" << endl;
	}
	virtual void fun2()
	{
		cout << "A fun2" << endl;
	}
	void fun3()
	{
		cout << "A fun3" << endl;
	}
	void fun4()
	{
		cout << "A fun4" << endl;
	}
};

class B:public A
{
	virtual void fun1()   // �麯������̬����
	{
		cout << "B fun1" << endl;
	}
	virtual void fun2(int x)
	{
		cout << "B fun2" << endl;
	}
	void fun3()
	{
		cout << "B fun3" << endl;
	}
	void fun4()
	{
		cout << "B fun4" << endl;
	}
};

int main()
{
	A *p;
	B b;
	p = &b;
	p->fun1();  // B fun1
	p->fun2(); // A fun2
	p->fun3(); // A fun3
	p->fun4(); // A fun4

	system("pause");
	return 0;
}