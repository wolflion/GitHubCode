#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s1,s2;
	getline(cin,s1); // 从屏幕读取一行字符串
	getline(cin,s2,' ');
	cout << "You inputed chars are: " << s1 << endl;
	cout << "You inputed chars are: " << s2 << endl;
	return 0;
}