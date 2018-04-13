#include <iostream>
#include <bitset>
#include <string>

using namespace std;

int main()
{
	bitset<10> bs1(7); // bitset中长度为10个bit；初始化为一个十进制数7
	bitset<10> bs2(string("1000101011"));
	cout << bs1 << endl;  // 输出0000000111
	cout << bs2 << endl;
	cin.get();  // 任意键退出
	return 0;
}