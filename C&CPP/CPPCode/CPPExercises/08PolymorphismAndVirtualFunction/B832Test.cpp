// 20170901
// 8.32 以下程序的执行结果

#include <iostream>
using namespace std;
class base
{
public:
	virtual void who()   // 虚函数，动态联编
	{
		cout << "base class" << endl;
	}
};

class derive1:public base
{
public:
	void who()
	{
		cout << "derive1 class" << endl;
	}
};

class derive2:public base
{
public:
	void who()
	{
		cout << "derive2 class" <<endl;
	}
};

int main()
{
	base obj1,*p;
	derive1 obj2;
	derive2 obj3;

	p = &obj1;
	p->who(); // base class
	p = &obj2;
	p->who(); // derive1 class
	p=&obj3;
	p->who(); // derive2 class

	system("pause");
	return 0;
}