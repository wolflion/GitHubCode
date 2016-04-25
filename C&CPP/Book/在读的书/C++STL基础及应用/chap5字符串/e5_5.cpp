/*
 * 20160425
 * e5_5.cpp 字符串查询函数基本用法
 */

#include <iostream>
#include <sstream>
using namespace std;

int main(int argc, char* argv[])
{
	string s = "what's your name?my name is TOM. How do you do?Fine,thanks. ";
	// 从源串起始位置为0处查找有"your"字符串位置
	int n = s.find("your");
	cout << "the first your pos:" << n << endl;
	// 从源串起始位置为15处查找有"your"字符串位置
	n = s.find("you",15);
	cout << "the first your pos begin from 15:" << n << endl;
	// 从源串起始位置为0处依次查找每个字符，如果它在输入的字符串参数"abcde"中，则返回该字符的位置。
	n = s.find_first_of("abcde");
	cout << "find pos when character within abcde:" << n << endl;
	// 从源串起始位置为3处依次查找每个字符，如果它在输入的字符串参数"abcde"中，则返回该字符的位置。
	n = s.find_first_of("abcde",3);
	cout << "find pos beign from 2 when character within abcde:" << n << endl;
	system("pause");
	return 0;
}