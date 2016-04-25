/*
 * 20160425
 * e4_12.cpp 反解字符串给各变量赋值
 */

#include <iostream>
#include <sstream>
using namespace std;

int main(void)
{
	int i;
	float f;
	string strHello;

	string strText = "1 3.14 Hello";
	istringstream s(strText);
	s >> i;
	s >> f;
	s >> strHello;

	cout << "i=" << i << endl;
	cout << "f=" << f << endl;
	cout << "strHello=" << strHello << endl;

	system("pause");
	return 0;
}