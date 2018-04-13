/*
 * 20160425
 * e5_10.cpp C++STL实现的string trim()功能
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	string s = " hello ";
	cout << s << endl;
	s.erase(0,s.find_first_not_of(" "));  // 删除左空格
	s.erase(s.find_last_not_of(" ") + 1); // 删除右空格
	cout << s << endl;
	system("pause");
	return 0;
}