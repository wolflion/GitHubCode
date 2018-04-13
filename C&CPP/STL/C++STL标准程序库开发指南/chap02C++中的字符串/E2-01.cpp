#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str("12345678"); // 为什么string str("123456789");就越界了呢? lionel
	char ch[]="abcdefgh";
	string a;
	string str_1(str); // 构造函数
	string str_2(str,2,5); // 构造函数，从第2个元素开始复制5个元素
	string str_3(ch,5); // 字符串ch的前5个元素
	//string str_4(str,'X'); // 将5个'X'组成的字符串赋值给str_4，--本质是这行写错了lionel
	string str_4(5,'X'); // 将5个'X'组成的字符串赋值给str_4
	string str_5(str.begin(),str.end());

	cout<< str <<endl;
	cout << a << endl;
	cout << str_1 << endl;
	cout << str_2 << endl;
	cout << str_3 << endl;
	cout << str_4 << endl;
	cout << str_5 << endl;

	return 0;
}