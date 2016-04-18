/*
 * 20160418
 * ∂‡÷ÿºÃ≥–
 */

#include <iostream>
#include <string>
using namespace std;

class Teacher{
public:
	Teacher(string nam, int a, string t);
	void display();
protected:
	string name;
	int age;
	string title;
};

Teacher::Teacher(string nam, int a, string t)
{
	name = nam;
	age = a;
	title = t;
}

void Teacher::display()
{
	cout << name << endl;
	cout << age << endl;
	cout << title << endl;
}

class Student{
public:
	Student(char nam[], char s, float sco);
	void displayStu();
protected:
	char nameStu[20];// string nameStu;
	char sex;
	float score;
};

Student::Student(char nam[], char s, float sco)
{
	strcpy(nameStu,nam);
	sex = s;
	score = sco;
}

void Student::displayStu()
{
	cout << nameStu << endl;
	cout << sex << endl;
	cout << score << endl;
}

class Graduate:public Teacher,public Student{
public:
	Graduate(string nam, int a, char s, string t, float sco, float w);
	void show();
private:
	float wage;
};


Graduate::Graduate(string nam, int a, char s, string t, float sco, float w):Teacher(nam,a,t),Student(nameStu,s,sco),wage(w)
{
	;
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
	Graduate grad("Wang",24,'f',"assistant",89.5,1234.5);
	grad.show();

	system("pause");
	return 0;
}