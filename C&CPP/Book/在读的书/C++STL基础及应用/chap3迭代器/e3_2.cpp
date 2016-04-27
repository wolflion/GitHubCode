/*
 * 20160427
 * e3_2.cpp 利用istream_iterator迭代器迭代标准输入流
 */

#include <iostream>
#include <iterator>
using namespace std;

int main(int argc, char* argv)
{
	cout << "请输入数据(如 111 222 333,):";  // 结尾有个,号。

	// 建立键盘输入流，并用istream_iterator枚举整型数据
	istream_iterator<int>a(cin);
	// 建立输入流结束迭代器
	istream_iterator<int>b;  // b即是调用无参数的istream_iterator构造函数获得的。

	while(1)
	{
		// 输出整型数据->调用operator *()
		cout << *a << endl;
		// 迭代器指针指向下一个元素->调用operator++(int)
		a++;  
		// 如果当前迭代器等于结束迭代器，则->调用operator==
		if(a == b)
		{
			break; // 退出while循环
		}
	}
	system("pause");
	return 0;
}