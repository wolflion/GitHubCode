/*
 * 20160425
 * e4_14.cpp 从键盘中输入学生属性值，并在屏幕上重新显示
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

// 重载operator>>
istream& operator>> (istream& is, Student& s)
{
	is >> s.strName >> s.strSex >> s.nAge;
	return is;
}

ostream& operator<< (ostream& os, Student& s) // Student是普通对象
{
	os << s.strName << "\t" << s.strSex << "\t" << s.nAge << "\n";
	return os;
}

ostream& operator<< (ostream& os, const Student& s)  // Student是常对象
{
	cout << "const Student 输出是:" << endl;
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
	cout << "请输入数据(姓名 性别 年龄):";
	cin >> s;
	cout << "输入的数据是: ";
	cout << s;
	f(s);
	system("pause");
	return 0;
}