// 2017-09-24

#include <iostream>
using namespace std;

// 仿函数声明
class functor
{
public:
	void operator()(int x){ cout << 2 * x << endl; }
};

int main()
{
	// 仿函数定义及调用
	functor f;
	f(10);

	// lambda表达式声明定义及调用
	[](int x){cout << 2 * x << endl; }(10);

	system("pause");
	return 0;
}