#include <iostream>
using namespace std;
class Add
{
public:
	int operator()(int a,int b)  // 运算符重载
	{
		return a+b;
	}
};

// 函数的第3个形参为Add类型对象
void function(int x,int y,Add add)
{
	cout << add(x,y) << endl;
}


int main()
{
	// 实参Add()为临时函数对象
	function(4,7,Add());
	return 0;
}