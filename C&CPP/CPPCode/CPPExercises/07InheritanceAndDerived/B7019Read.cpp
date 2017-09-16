// 2017-09-06
// 例7.19 类的构造函数如下，填写正确的输出结果

#include <iostream>
using namespace std;
class data
{
private:
	int x;
public:
	data(int x)
	{
		data::x = x;
		cout << "class data" << endl;
	}
};

class a
{
	data d1;
public:
	a(int x):d1(x)  // 子对象
	{
		cout << "class a " << endl;
	}
};

class b:public a
{
	data d2;
public:
	b(int x):a(x),d2(x)
	{
		cout << "class b" << endl;
	}
};

class c:public b
{
public:
	c(int x):b(x)
	{
		cout << "class c" << endl;
	}
};

int main()
{
	c obj(5); // 执行a类构造函数子对象d1初始化；执行a类构造函数；
	          // 执行b类类构造函数子对象d2初始化；执行b类构造函数；执行c类构造函数；
	system("pause");
	return 0;
}