/*
 * 20160425
 * e4_13.cpp 合并不同类型的数据到字符串
 */

#include <iostream>
#include <sstream>
using namespace std;

int main(void)
{
	cout << "type an int, a float and a string: ";
	int i;
	float f;
	string stuff;
	cin >> i >> f;
	getline(cin,stuff);
	ostringstream os;
	os << "integer=" << i << endl;
	os << "float=" << f << endl;
	os << "string=" << stuff << endl;

	// 将这些数据写入到os里，然后通过os.str()方法
	string result = os.str();
	cout << result << endl;

	system("pause");
	return 0;
}