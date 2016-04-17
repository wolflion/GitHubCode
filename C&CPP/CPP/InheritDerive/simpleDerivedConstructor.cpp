/*
 * 20160417
 * 简单的派生类的构造函数
 */

#include <iostream>
#include <string>
using namespace std;

// 声明一个基类
class Student{
public:
	Student(int n,string nam, char s);
	~Student();
protected:
	int num;
	string name;
	char sex;
};

// 不加类修饰符，会以为是全局的
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

// 声明公有派生类MidStudent
class MidStudent:public Student{
public:
	MidStudent(int n ,string nam, char s, int a, string ad);
	void Show();
	~MidStudent();
private:
	int age;
	string addr;
};

// 这种语法，我也不记得了【参数初始化列表】
MidStudent::MidStudent(int n, string nam, char s, int a, string ad) : Student(n,nam,s)  
{
	// 这种调用方式不可行？
//	Student(n,nam,s);
	age = a;
	addr = ad;
	cout << "MidStudent" << endl << endl;
}

void MidStudent::Show()
{
	// num为什么不能直接用？
//	cout <<　num << endl;
	cout << Student::num << endl;
	cout << name << endl;
	cout << sex << endl;
	cout << age << endl;
	cout << addr << endl << endl; // 再换一行
}

MidStudent::~MidStudent()
{
	cout << "~MidStudent" << endl << endl;
}

int main()
{
	// 顺便看一下构造函数执行顺序
	MidStudent midStu1(10010,"Wang",'f',19,"shanghai");
	MidStudent midStu2(10011,"Li",'f',19,"beijing");
	midStu1.Show();
	midStu2.Show();

	system("pause");
	return 0;
}