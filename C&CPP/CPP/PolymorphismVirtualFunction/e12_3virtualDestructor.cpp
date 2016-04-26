/*
 * 20160421
 * 例12.3 派生类对象虚析构函数的执行情况
 * created by lionel
 *
 * ！！！最好把基类的析构函数声明为虚函数！！！
 *
 */

#include <iostream>
using namespace std;

class Point{
public:
	Point(){}
	//~Point()  // 只执行基类的析构函数，而不执行派生类的析构函数
	virtual ~Point() // 基类是虚析构函数，由该基类所派生的所有派生类的析构函数也都自动成为虚函数
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