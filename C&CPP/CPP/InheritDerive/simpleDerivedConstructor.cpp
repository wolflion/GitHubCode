/*
 * 20160417
 * �򵥵�������Ĺ��캯��
 */

#include <iostream>
#include <string>
using namespace std;

// ����һ������
class Student{
public:
	Student(int n,string nam, char s);
	~Student();
protected:
	int num;
	string name;
	char sex;
};

// ���������η�������Ϊ��ȫ�ֵ�
Student::Student(int n,string nam, char s)
{
	num = n;
	name = nam;
	sex = s;
	cout << "Student" << endl << endl;
}

Student::~Student()
{
	cout << "~Student" << endl << endl;
}

// ��������������MidStudent
class MidStudent:public Student{
public:
	MidStudent(int n ,string nam, char s, int a, string ad);
	void Show();
	~MidStudent();
private:
	int age;
	string addr;
};

// �����﷨����Ҳ���ǵ��ˡ�������ʼ���б�
MidStudent::MidStudent(int n, string nam, char s, int a, string ad) : Student(n,nam,s)  
{
	// ���ֵ��÷�ʽ�����У�
//	Student(n,nam,s);
	age = a;
	addr = ad;
	cout << "MidStudent" << endl << endl;
}

void MidStudent::Show()
{
	// numΪʲô����ֱ���ã�
//	cout <<��num << endl;
	cout << Student::num << endl;
	cout << name << endl;
	cout << sex << endl;
	cout << age << endl;
	cout << addr << endl << endl; // �ٻ�һ��
}

MidStudent::~MidStudent()
{
	cout << "~MidStudent" << endl << endl;
}

int main()
{
	// ˳�㿴һ�¹��캯��ִ��˳��
	MidStudent midStu1(10010,"Wang",'f',19,"shanghai");
	MidStudent midStu2(10011,"Li",'f',19,"beijing");
	midStu1.Show();
	midStu2.Show();

	system("pause");
	return 0;
}