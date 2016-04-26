/*
 * 20160421
 * 例12.4 虚函数和抽象基类的应用
 * created by lionel
 */

#include <iostream>
using namespace  std;

// 声明抽象基类
class Shape{
public:
	// 虚函数
	virtual float area() const  
	{
		return 0.0;
	}
	virtual float volume() const
	{
		return 0.0;
	}
	// 纯虚函数，不被定义的话，派生类还是纯虚函数
	virtual void shapeName() const = 0; 
};

class Point : public Shape{
public:
	Point(float = 0, float = 0);
	void setPoint(float , float);
	float getX() const
	{
		return x;
	}
	float getY() const
	{
		return y;
	}
	// 对纯虚函数进行定义
	virtual void shapeName()const
	{
		cout << "Point:";
	}
	friend ostream &operator << (ostream &, const Point &);
protected:
	float x,y;
};
// 因为point没有面积和体积，因此不必重新定义area()和volume()

Point::Point(float a, float b)
{
	x = a;
	y = b;
}

void Point::setPoint(float a, float b)
{
	x = a;
	y = b;
}

ostream &operator << (ostream &output, const Point &p)
{
	output << "[" << p.x << "," << p.y << "]";
	return output;
}

class Circle:public Point{
public:
	Circle(float x = 0,float y =0, float r=0);
	void setRadius(float);
	float getRadius() const;
	virtual float area() const;
	// 对纯虚函数进行定义
	virtual void shapeName()const
	{
		cout << "Circle:";
	}
	friend ostream &operator << (ostream &output, const Circle &p);
protected:
	float radius;
};

Circle::Circle(float x ,float y, float r):Point(x,y),radius(r)
{
	//
}

// 这个写法是否有问题？初始化列表的使用场景？
//void Circle::setRadius(float r):radius(r)
//{
//	//
//}

void Circle::setRadius(float r)
{
	radius = r;
}

float Circle::getRadius() const
{
	return radius;
}

// 重新定义area()
float Circle::area() const
{
	return 3.1415926*radius*radius;
}

ostream &operator<<(ostream &output, const Circle &c)
{
	output << "[" << c.x << "," << c.y << "],r=" << c.radius;
	return output;
}

class Cylinder:public Circle
{
public:
	Cylinder(float x=0,float y=0,float r=0,float h=0);
	void setHeight(float);
	virtual float area() const;
	virtual float volume() const;
	virtual void shapeName() const
	{
		cout << "Cylinder:";
	}
	friend ostream& operator << (ostream &, const Cylinder &);
protected:
	float height;
};

Cylinder::Cylinder(float x/* =0 */,float y/* =0 */,float r/* =0 */,float h/* =0 */):Circle(x,y,r),height(h){}

void Cylinder::setHeight(float h)
{
	height = h;
}

float Cylinder::area()const
{
	return 2 * Circle::area() + 2 * 3.14159 * radius * height;
}

// volume()在派生类里声明为virtual函数了，没有定义，会报错
float Cylinder::volume()const
{
	return Circle::area()*height;
}

ostream &operator<<(ostream &output, const Cylinder &cy)
{
	output<<"["<<cy.x <<","<<cy.y<<"],r="<<cy.radius<<",h="<<cy.height;
	return output;
}

int main(_In_ int _Argc, _In_count_(_Argc) _Pre_z_ char ** _Argv, _In_z_ char ** _Env)
{
	Point point(3.2,4.5);
	Circle circle(2.4,1.2,5.6);
	Cylinder cylinder(3.5,6.4,5.2,10.5);
	// 静态关联，在编译时就确定应调用哪一个类的shapeName()
	point.shapeName();
	cout << point << endl;

	circle.shapeName();
	cout << circle << endl;

	cylinder.shapeName();
	cout << cylinder << endl << endl;

	// 定义基类指针
	Shape *pt;
	pt = &point;
	// 动态关联
	pt->shapeName();
	cout <<"x=" <<point.getX()<<",y="<<point.getY()<<"\narea"<<pt->area()<<"\nvolume="<<pt->volume()<<"\n\n";

	pt = &circle;
	pt->shapeName();
	cout <<"x=" <<point.getX()<<",y="<<point.getY()<<"\narea"<<pt->area()<<"\nvolume="<<pt->volume()<<"\n\n";

	pt = &cylinder;
	pt->shapeName();
	cout <<"x=" <<point.getX()<<",y="<<point.getY()<<"\narea"<<pt->area()<<"\nvolume="<<pt->volume()<<"\n\n";

	system("pause");
	return 0;
}
