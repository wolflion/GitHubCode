// 20170901
// 5-20 利用类型转换函数将Location类类型转换成整型。

#include <iostream>
using namespace std;

class Location
{
private:
	int A,B;
public:
	Location(int i,int j)
	{
		A = i;
		B = j;
	}
	operator int()  // 这是类型转换函数，但类型转换函数有什么作用呢？
	{
		return A*B;
	}
};

int main()
{
	Location op1(2,3),op2(4,-3);
	int i;
	i = op1;  // 调用类型转换函数  【将Location类型的op1转换成了int类型的i】
	cout << i << "\n";
	i=200+op2;
	cout << i<<"\n";
	system("pause");
	return 0;
}