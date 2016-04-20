/*
 * 20160420
 * 12.2 基类与派生类中有同名函数
 */

#include <iostream>
#include <string>
using namespace std;

class Student{
public:
	Student(int, string, float);
	//void display();  /*没写virtual就会导致display()被重载，只输出基类的要求*/
	virtual void display();
protected:
	int num;
	string name;
	float score;
};

Student::Student(int n, string nam, float s)
{
	num = n;
	name = nam;
	score = s;
}

void Student::display()
{
	cout << num << endl;
	cout << name << endl;
	cout << score << endl << endl;
}

class Graduate:public Student{
public: //忘写，就是private，会访问不了构造函数
	Graduate(int ,string, float, float);
	void display();
private:
	float pay;
};


//Graduate::Graduate(int ,string, float, float):Student(n,nam,s),pay(p) //error
Graduate::Graduate(int n,string nam, float s, float p):Student(n,nam,s),pay(p) //不写参数的本质问题是啥？
{
	//
}

void Graduate::display()
{
	cout << num << endl;
	cout << name << endl;
	cout << score << endl;
	cout << pay << endl  << endl;
}

int main()
{
	Student std(1001,"Li",87.5);
	Graduate grad(2001,"Wang",98.5,563.5);
	Student *pStu = &std;
	pStu->display();
	pStu = &grad;
	pStu->display();

	system("pause");
	return 0;
}