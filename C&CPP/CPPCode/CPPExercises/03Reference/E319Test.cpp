// 20170829
#include <iostream>
using namespace std;

//例3.19 设计一个Rect类，有下列成员函数 （1）Move():从一个位置移到另一个位置
//（2）Size():改变矩形的大小 （3）Where()：返回矩形左上角的坐标值 （4）Area(): 计算矩形面积

// Where()返回矩形左上角的坐标值，即两个参数，所以采用引用类型。

class Rect
{
public:
	Rect(int x1, int y1, int w1, int h1)
	{
		x = x1;
		y = y1;
		w = w1;
		h = h1;
	}
	~Rect();
	void Move(int x1, int y1)
	{
		x = x1;
		y = y1;
	}

	void Size(int w1, int h1)
	{
		w = w1;
		h = h1;
	}

	void Where(int &x1, int &y1)
	{
		x1 = x;
		y1 = y;
	}

	int Area()
	{
		return w*h;
	}

private:
	int x, y; // 左上角坐标
	int w, h; // 宽度和高度
};

Rect::~Rect()
{
}

int main()
{
	Rect r(2, 3, 20, 10);
	int x, y;
	cout << "矩形面积：" << r.Area() << endl;
	cout << "移动到(5,4)" << endl;
	r.Move(5,4);
	cout << "改变宽为6，高为3"<<endl;
	r.Size(6,3);
	r.Where(x,y);
	cout<<"左上角：（"<< x << "," << y <<"）"<<endl;
	cout << "矩形面积：" << r.Area() << endl;
	system("pause");
	return 0;
}