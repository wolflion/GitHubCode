/*
 * 20160425
 * e4_13.cpp �ϲ���ͬ���͵����ݵ��ַ���
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

	// ����Щ����д�뵽os�Ȼ��ͨ��os.str()����
	string result = os.str();
	cout << result << endl;

	system("pause");
	return 0;
}