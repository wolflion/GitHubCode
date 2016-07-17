/*
 * ���й��캯���Ķ��ؼ̳б�дһ������Ҫ���ڸó�����Ӧ�������
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
		strcpy(m_name,name); // ָ��Ļ�����Ҫstrcpy
		m_age = age;
		cout << "Person Name=" << m_name << endl;
	}
	~Person()
	{
		delete m_name; //����ʱ��Ҫɾ��ָ������
	}
};

class Student:public virtual Person
{
protected:
	long int m_classnu;
public:
	Student(char *name, int age, long int classnu):Person(name,age) //�����ʲô�﷨��
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
		Student(name,age,classnu),Employee(name,age,wage)//ʲô�﷨��
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

// ��ʼ�������ͷ�����಻ͬ�ĵط�
// ���ؼ̳еĹ��캯��ִ����ѭ��ִ�л���Ĺ��캯������ִ�ж����Ա�Ĺ��캯�������ִ�������๹�캯����ԭ��