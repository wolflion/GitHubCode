/*
 * 20160425
 * e4_14.cpp �Ӽ���������ѧ������ֵ��������Ļ��������ʾ
 */

#include <iostream>
#include <sstream>
using namespace std;

class Student
{
public:
	string strName;
	string strSex;
	int nAge;
};

// ����operator>>
istream& operator>> (istream& is, Student& s)
{
	is >> s.strName >> s.strSex >> s.nAge;
	return is;
}

ostream& operator<< (ostream& os, Student& s) // Student����ͨ����
{
	os << s.strName << "\t" << s.strSex << "\t" << s.nAge << "\n";
	return os;
}

ostream& operator<< (ostream& os, const Student& s)  // Student�ǳ�����
{
	cout << "const Student �����:" << endl;
	os << s.strName << "\t" << s.strSex << "\t" << s.nAge << "\n";
	return os;
}

void f(const Student& s)
{
	cout << s;
}

int main(int argc, char* argv[])
{
	Student s;
	cout << "����������(���� �Ա� ����):";
	cin >> s;
	cout << "�����������: ";
	cout << s;
	f(s);
	system("pause");
	return 0;
}