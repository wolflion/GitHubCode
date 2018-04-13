/*
 * 20160427
 * e3_3.cpp 利用ostream_iterator向屏幕输出数据
 */

#include <iostream>
#include <iterator>
using namespace std;

int main(int argc, char* argv)
{
	cout << "输出迭代器演示结果为：";

	// 创建标准输出迭代器
	ostream_iterator<int>myout(cout,"\t");
	*myout = 1;
	myout++;
	*myout = 2;
	myout++;
	*myout = 3;

	system("pause");
	return 0;
}