// 20170901
// 8.35 以下程序的执行结果

#include <iostream>
using namespace std;
class base
{
public:  // 忘记写这，就会导致派生类没法使用
	base()
	{
		cout << "构造base对象"<<endl;
		f();  // 调用base类的f()函数
	}
	virtual void f()
	{
		cout << "调用base::f()"<<endl;
	}
};

class derive:public base
{
public:
	derive()
	{
		cout << "构造derive对象"<<endl;
		f();  //调用derive类的f()函数
	}
	void f()
	{
		cout << "调用derive::f()"<<endl;
	}
};

int main()
{
	derive d;  // 构造base对象\n 调用base::f()\n 构造derive对象\n 调用derive::f()\n 【先基类，再子类】

	system("pause");
	return 0;
}