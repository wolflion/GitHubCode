/*
 * 20160421
 * ��12.3 ���������������������ִ�����
 * created by lionel
 *
 * ��������ðѻ����������������Ϊ�麯��������
 *
 */

#include <iostream>
using namespace std;

class Point{
public:
	Point(){}
	//~Point()  // ִֻ�л������������������ִ�����������������
	virtual ~Point() // �������������������ɸû������������������������������Ҳ���Զ���Ϊ�麯��
	{
		cout << "Point destructor" << endl;
	}
};

class Circle:public Point{
public:
	Circle(){}
	~Circle()
	{
		cout << "Circle destructor" << endl;
	}
private:
	int radius;
};

int main()
{
	Point *p = new Circle;
	delete p;
	return 0;
}