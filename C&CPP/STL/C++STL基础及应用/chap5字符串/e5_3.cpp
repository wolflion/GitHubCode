/*
 * 20160425
 * e5_3.cpp 字符串插入操作
 */

#include <iostream>
#include <sstream>
using namespace std;

int main(int argc, char* agrv[])
{
	string s = "do";
	cout << "Inition size is:" << s.size() << endl;
	// 第1个参数表明插入源串的位置，第二个位置表明要插入的字符串
	s.insert(0,"How");  
	// 源字符串尾部追加该字符串
	s.append("you");
	// 利用+实现字符串的连接，从而创建新的字符串
	s = s + "do?";

	cout << "final size is:" << s.size() << endl;
	cout << s;

	system("pause");
	return 0;
}