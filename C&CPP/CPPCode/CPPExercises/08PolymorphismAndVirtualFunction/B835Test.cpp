// 20170901
// 8.35 ���³����ִ�н��

#include <iostream>
using namespace std;
class base
{
public:  // ����д�⣬�ͻᵼ��������û��ʹ��
	base()
	{
		cout << "����base����"<<endl;
		f();  // ����base���f()����
	}
	virtual void f()
	{
		cout << "����base::f()"<<endl;
	}
};

class derive:public base
{
public:
	derive()
	{
		cout << "����derive����"<<endl;
		f();  //����derive���f()����
	}
	void f()
	{
		cout << "����derive::f()"<<endl;
	}
};

int main()
{
	derive d;  // ����base����\n ����base::f()\n ����derive����\n ����derive::f()\n ���Ȼ��࣬�����ࡿ

	system("pause");
	return 0;
}