/*
 * 20160425
 * e5_8.cpp 整型数据与字符串互相转化
 */

#include <iostream>
#include <sstream>
#include <sstream>
using namespace std;

int main(int argc, char* argv[])
{
	// 将整型10转化成字符串"10"
	int n1 = 10;
	string s1;
	stringstream os1; // 利用stringstream做中间媒介
	os1 << n1;
	os1 >> s1;
	cout << "整型10转化成字符串10:" << s1 << endl;

	// 将字符串"123"转化成整型123
	int n2 = 0;
	string s2 = "123";
	stringstream os2;
	os2 << s2;
	os2 >> n2;
	cout << "将字符串123转化成整型123:" << n2 << endl;

	system("pause");
	return 0;
}