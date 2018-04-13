#include <iostream>
#include <string>
using namespace std;

int main()
{
	string str1("123456");
	string str2("abcdefghijklmn");
	string str;
	str.assign(str1);
	cout << str << endl;
	str.assign(str1,3,3);
	cout << str <<endl;

	str.assign(str1,2,str1.npos);
	cout << str << endl;

	str.assign(5,'X');
	cout << str << endl;

	string::iterator itB;
	string::iterator itE;
	itB = str1.begin();
	itE = str1.end();
	str.assign(itB,(--itE));
	cout << str << endl;

	str.erease(3);
	cout << str << endl;
	str.erease(str.begin(),str.end());
	cout <<":"<<str<<":"<<endl;

	return 0;
}