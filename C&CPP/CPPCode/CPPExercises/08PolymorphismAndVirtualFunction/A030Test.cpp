// 20170901
// 5-30

#include <iostream>
using namespace std;

const double PI = 3.1415; // const��#define ��ʲô����

class shapes
{
protected:
	int x, y, r;  //���εĳ�������
public:
	void insquare(int d, int w)
	{
		x = d;
		y = w;
	}
	void incircle(int r1)
	{
		r = r1;
	}
	virtual void show_area() = 0;  // ���麯����=0
};

class swuare :public shapes
{
public:
	void show_area()
	{
		cout << "Area of square: " << x*y << endl;
	}
};

class circle :public shapes
{
public:
	void show_area()
	{
		cout << "Area of circle: " << PI*r*r << endl;
	}
};

int main()
{
	shapes *ptr[2];
	swuare s1;
	circle c1;
	ptr[0] = &s1;   // ��0��Ԫ��ָ����ж���s1�ĵ�ַ
	ptr[0]->insquare(20, 5);
	ptr[0]->show_area();
	ptr[1] = &c1; // ��1��Ԫ��ָ����ж���c1�ĵ�ַ
	ptr[1]->incircle(20);
	ptr[1]->show_area();

	system("pause");
	return 0;
}