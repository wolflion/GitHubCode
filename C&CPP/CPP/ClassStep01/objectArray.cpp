/*
 * 20160424
 * 例9.6 对象数组的使用方法
 * created by lionel
 */

#include <iostream>
using namespace std;

class Box{
public:
	// 有默认参数的构造函数，用参数初始化列表对数据成员初始化
	Box(int h=10,int w=12,int len=15):height(h),width(w),length(len)
	{
		//
	}
	int volume();
private:
	int height;
	int width;
	int length;
};

int Box::volume()
{
	return (height*width*length);
}

int main()
{
	// 定义对象数组
	Box a[3]={Box(10,12,15),Box(15,18,20),Box(16,20,26)};

	cout << a[0].volume() << endl;
	cout << a[1].volume() << endl;
	cout << a[2].volume() << endl;
	system("pause");
	return 0;
}