// 20170901
// 5-30

#include <iostream>
using namespace std;

const double PI = 3.1415; // const和#define 有什么区别？

class shapes
{
protected:
	int x, y, r;  //矩形的长、宽、高
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
	virtual void show_area() = 0;  // 纯虚函数有=0
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
	ptr[0] = &s1;   // 第0个元素指向持有对象s1的地址
	ptr[0]->insquare(20, 5);
	ptr[0]->show_area();
	ptr[1] = &c1; // 第1个元素指向持有对象c1的地址
	ptr[1]->incircle(20);
	ptr[1]->show_area();

	system("pause");
	return 0;
}