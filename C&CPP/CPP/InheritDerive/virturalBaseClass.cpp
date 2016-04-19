/*
 * 20160419
 * �����ļ�Ӧ��
 */

#include <iostream>
#include <string>
using namespace std;

class Person{
public:
	Person(string nam, char s, int a);
protected:
	string name;
	char sex;
	int age;
};

Person::Person(string nam, char s, int a)
{
	name = nam;
	sex = s;
	age = a;
}

// ����PersonΪ���ü̳е������
class Teacher:virtual public Person{
public:
	Teacher(string nam, char s, int a, string t);
protected:
	string title;
};


Teacher::Teacher(string nam, char s, int a, string t):Person(nam,s,a)
{
	title = t;
}

class Student:virtual public Person{
public:
	Student(string nam, char s, int a, float sco);
protected:
	float score;
};


Student::Student(string nam, char s, int a, float sco):Person(nam,s,a),score(sco)
{
	//score = sco;
}

// ���ؼ̳е�������Graduate
class Graduate:public Teacher, public Student
{
public:
	Graduate(string nam, char s, int a, string t ,float sco, float w);
	void show();
private:
	float wage;
};

Graduate::Graduate(string nam, char s, int a, string t ,float sco, float w):Person(nam,s,a),Teacher(nam,s,a,t),Student(nam,s,a,sco),wage(w)
{
	//
}

void Graduate::show()
{
	cout << name << endl;
	cout << age << endl;
	cout << sex << endl;
	cout << score << endl;
	cout << title << endl;
	cout << wage << endl;
}


int main()
{
	Graduate grad("wang",'f',24,"assistant",89.5,1234.5);
	grad.show();

	system("pause");
	return 0;
}