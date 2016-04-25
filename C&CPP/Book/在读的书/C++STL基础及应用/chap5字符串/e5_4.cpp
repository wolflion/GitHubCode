/*
 * 20160425
 * e5_4.cpp ×Ö·û´®Ìæ»»²Ù×÷
 */

#include <iostream>
#include <sstream>
using namespace std;

int main(int argc, char* agrv[])
{
	string s = "what's your name?";
	cout << "Ìæ»»Ç°:" << s << endl;
	s.replace(7,4,"her");
	cout << "Ìæ»»ºó:" << s << endl;

	system("pause");
	return 0;
}