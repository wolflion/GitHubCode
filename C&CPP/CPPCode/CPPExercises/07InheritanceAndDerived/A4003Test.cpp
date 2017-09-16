// 20170905，但2017-01-12第一次写过
// figure类的派生类square和isosceles_triangle

#include <iostream>
using namespace std;

class figure
{
public:
	double height;
	double width;
};

class square:public figure
{
public:
	square(double h,double w);
	double area();
};

class isosceles_triangle:public figure
{
public:
	isosceles_triangle(double h, double w);
	double area();
};

square::square(double h,double w)
{
	height = h;
	width = w;
}

isosceles_triangle::isosceles_triangle(double h,double w)
{
	height = h;
	width = w;
}

void square::area()
{
	cout << "the area of square is ：" << width*height << endl;
}

void isosceles_triangle::area()
{
	cout << "the area of isosceles_triangle ：" << 0.5*width*height << endl;
}

int main()
{
	square s(10.0, 6.0);
	isosceles_triangle i(8.0,6.0);
	s.area(); // 60
	i.area(); // 24
	return 0;
}