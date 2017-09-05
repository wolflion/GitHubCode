// 2017-01-12第一次，2017-09-05整理

/*
 * 含有构造函数的多重继承编写一个程序，要求在该程序中应用虚基类
 */

#include <iostream>
#include <string>
using namespace std;

class Person
{
protected:
	char *m_name;
	int m_age;
public:
	Person(char *name, int age)
	{
		m_name = new char[strlen(name)+1];
		strcpy(m_name,name); // 指针的话，需要strcpy
		m_age = age;
		cout << "Person Name=" << m_name << endl;
	}
	~Person()
	{
		delete m_name; //析构时需要删除指针数据
	}
};

class Student:public virtual Person
{
protected:
	long int m_classnu;
public:
	Student(char *name, int age, long int classnu):Person(name,age) //这个是什么语法？
	{
		m_classnu = classnu;
		cout << "Student Name="<<m_name<<endl;
	}
	~Student()
	{

	}
};

class Employee:public virtual Person
{
protected:
	float m_wage;
public:
	Employee(char *name, int age, float wage):Person(name,age)
	{
		m_wage = wage;
		cout << "Employee Name="<<m_name<<endl;
	}
	~Employee()
	{

	}
};

class SideLine:public Student,public Employee
{
public:
	SideLine(char* name, int age, long int classnu,float wage):Person(name,age),
		Student(name,age,classnu),Employee(name,age,wage)//什么语法？
	{
		cout<<"SideLine Name="<<m_name<<endl;
	}
	~SideLine()
	{

	}
};

int main()
{
	SideLine obj("Angel",20,20000103,3000);
	system("pause");
	return 0;
}

// 初始化虚基类和非虚基类不同的地方
// 多重继承的构造函数执行遵循先执行基类的构造函数，再执行对象成员的构造函数，最后执行派生类构造函数的原则