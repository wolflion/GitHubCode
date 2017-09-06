// 2017-09-06
/* 例7.20 基类Person，学生类student和教师类teacher作为Person类的派生类，
每一个均有构造函数和析构函数。
*/

#include <iostream>
using namespace std;
class Person
{
	char *name;
	int age;
	char *add;
public:
	Person()
	{
		cout << "Person class constructor" << endl;
	}
	~Person()
	{
		cout << "Person class destructor" << endl;
	}
};

class student:public Person
{
	char *department;
public:
	student()
	{
		cout << "student class constructor" << endl;
	}
	~student()
	{
		cout << "student class destructor" << endl;
	}
};

class teacher:public Person
{
	char *major;
	float salary;
public:
	teacher()
	{
		cout << "teacher class constructor" << endl;
	}
	~teacher()
	{
		cout << "teacher class destructor" << endl;
	}
};

int main()
{
	student s1; 
	teacher t1;
	system("pause");
	return 0;

	/*
	Person class constructor
	student class constructor
	Person class constructor
	teacher class constructor

    // 先techaer再student，先建的后解析
	teacher class destructor
	Person class destructor
	student class destructor
	Person class destructor
	*/
}
