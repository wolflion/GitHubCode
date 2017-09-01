/ 20170901
// 5-1：分析以下程序的运行结果
#include <iostream>
using namespace std;

class Base
{
public:
	void show()
	{
		cout << "Parent class.\n";
	}
};

class First :public Base
{
public:
	void show()
	{
		cout << "First Derived class.\n";
	}
};

class Second :public Base
{
public:
	void show()
	{
		cout << "Second Derived class.\n";
	}
};

int main()
{
	Base b1;
	Base *ptr;  // 指向Base类的对象指针，也可以指向派生类对象。即ptr = &f1，也是可以的。
	First f1;
	Second s1;
	ptr = &b1;
	ptr->show();//Parent class.
	ptr = &f1;
	ptr->show();//Parent class.
	ptr = &s1;
	ptr->show();//Parent class.
	//以上，ptr->show()只执行父类的，而没有执行子类的，返回类型，参数类型和个数都相同，基类没有定义为virtual，所以都是静态联编的。
	system("pause");
	return 0;
}