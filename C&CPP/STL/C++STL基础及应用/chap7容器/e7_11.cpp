// e7_11.cpp

#include<iostream>
#include<string>
#include<list>
using namespace std;

typedef list<string> LISTSTR;

int main()
{
	LISTSTR test;
	test.push_back("back"); // 尾元素后增加
	test.push_front("middle");
	test.push_front("front"); // 首元素前增加

	cout << test.front() << endl; // 首元素的引用
	cout << *test.begin() << endl;

	cout << test.back() << endl;  // 尾元素的引用
	cout << *(test.rbegin()) << endl;

	test.pop_front(); // 删除容器首元素
	test.pop_back();  // 删除容器尾元素

	cout << test.front() << endl;
	getchar();
	return 0;
}