/*
 * 20160425
 * e5_10.cpp C++STLʵ�ֵ�string trim()����
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	string s = " hello ";
	cout << s << endl;
	s.erase(0,s.find_first_not_of(" "));  // ɾ����ո�
	s.erase(s.find_last_not_of(" ") + 1); // ɾ���ҿո�
	cout << s << endl;
	system("pause");
	return 0;
}