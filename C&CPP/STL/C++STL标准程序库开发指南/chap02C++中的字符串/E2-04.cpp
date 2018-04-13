#include <iostream>
#include <string>
using namespace std;

int main()
{
	string s("abcde");
	cout << s << endl;

	char &r = s[2];
	char *p = &s[3];
	r='X';
	*p='Y';

	cout << s << endl;

	s="12345678";
	r='X';
	*p='Y';	
	cout<<s<<endl;

	return 0;
}