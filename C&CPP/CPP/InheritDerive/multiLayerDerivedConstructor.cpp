/*
 * 20160418
 * �༶���������������Ĺ��캯��
 */

#include <iostream>
#include <string>
using namespace std;

// ��������
class Student{
public:
	Student(int n, string nam); // ���๹�캯��
	void display();              // �����Ա����
protected:
	int num;
	string name;
};

class Student1 : public Student{
public:
	Student1(int n, string nam, int a);
	void show();
private:
	int age;
};

class Student2 : public Student1{
public:
	Student2(int n, string nam, int a, int s);
	void show_all();
private:
	int score;
};

Student::Student(int n, string nam)
{
	num = n;
	name = nam;
}

void Student::display()
{
	cout << num << endl;
	cout << name << endl;
}

// ԭ�����ӣ�string nam �� char nam[10]
Student1::Student1(int n, string nam, int a):Student(n,nam)
{
	age = a;
}

void Student1::show()
{
	Student::display();
	cout << age << endl;
}


Student2::Student2(int n, string nam, int a,int s):Student1(n,nam,a)
{
	score = s;
}

void Student2::show_all()
{
	Student1::show();
	cout << score << endl;
}

int main()
{
	Student2 stud(10010,"Li",17,89);
	stud.show_all();

	system("pause");
	return 0;
}