/*
 * 20160414
 * 对象的赋值，复制
 */

#include <iostream>
using namespace std;

class BOX{
public:
	BOX(int=10,int=10,int=10); // 声明有默认参数的构造函数
	int volume();
private:
	int iHeight;
	int iWidth;
	int iLength;
};

BOX::BOX(int h, int w, int l)
{
	iHeight = w;
	iWidth = w;
	iLength = l;
}

int BOX::volume()
{
	return (iHeight * iWidth * iLength);
}

int main()
{
	BOX box1(15,30,25), box2;
	cout << box1.volume() << endl;
	box2 = box1; // 对象的赋值
	cout << box2.volume() << endl;

	BOX box3(box2); // 对象的复制方法一
	cout << box3.volume() << endl;
	BOX box4 = box3; // 对象的复制方法二
	cout << box4.volume() << endl;

	system("pause");
	return 0;
}