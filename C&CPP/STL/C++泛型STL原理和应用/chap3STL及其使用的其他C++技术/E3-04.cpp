// 2017-09-25

#include <iostream>
using namespace std;

class Test
{
public:
	// 重载前置增量运算符
	void operator++()
	{
		cout << "这是前置自增运算符" << endl;
	}
	// 重载后置增量运算符
	void operator++(int)
	{
		cout << "这是后置自增运算符" << endl;
	}
};

int main()
{
	Test test;
	// 使用了重载后置增量运算符
	test++;
	// 使用了重载前置增量运算符
	++test;
	system("pause");
	return 0;
}