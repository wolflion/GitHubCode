/*
 * 20160425
 * e5_4.cpp �ַ����滻����
 */

#include <iostream>
#include <sstream>
using namespace std;

int main(int argc, char* agrv[])
{
	string s = "what's your name?";
	cout << "�滻ǰ:" << s << endl;
	s.replace(7,4,"her");
	cout << "�滻��:" << s << endl;

	system("pause");
	return 0;
}