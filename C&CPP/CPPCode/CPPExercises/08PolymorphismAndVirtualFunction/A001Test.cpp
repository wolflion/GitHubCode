/ 20170901
// 5-1���������³�������н��
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
	Base *ptr;  // ָ��Base��Ķ���ָ�룬Ҳ����ָ����������󡣼�ptr = &f1��Ҳ�ǿ��Եġ�
	First f1;
	Second s1;
	ptr = &b1;
	ptr->show();//Parent class.
	ptr = &f1;
	ptr->show();//Parent class.
	ptr = &s1;
	ptr->show();//Parent class.
	//���ϣ�ptr->show()ִֻ�и���ģ���û��ִ������ģ��������ͣ��������ͺ͸�������ͬ������û�ж���Ϊvirtual�����Զ��Ǿ�̬����ġ�
	system("pause");
	return 0;
}