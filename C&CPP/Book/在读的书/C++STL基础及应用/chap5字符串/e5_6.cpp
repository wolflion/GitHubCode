/*
 * 20160425
 * e5_6.cpp �ַ���ɾ������ʾ��
 */

#include <iostream>
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	string s1 = "How are you?";
	s1.erase(s1.begin(), s1.begin() + 3); // ɾ��s1����ǰ�����ַ�
	cout << "after erase to s1 is: " << s1 << endl;

	string s2 = "Fine, thanks";	
	s2.erase(s2.begin(), s2.end());        // ɾ������s2��
	cout << "after erase to s2 is: " << s2 << endl;	
	
	system("pause");
	return 0;
}