/*
 * 20160418
 * 多级派生情况下派生类的构造函数
 */

#include <iostream>
#include <string>
using namespace std;

// 声明基类
class Student{
public:
	Student(int n, string nam); // 基类构造函数
	void display();              // 基类成员函数
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

// 原书例子：string nam 是 char nam[10]
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