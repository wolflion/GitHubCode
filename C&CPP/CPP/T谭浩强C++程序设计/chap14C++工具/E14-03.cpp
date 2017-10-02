// 2017-09-29
#include <iostream>
#include <string>
using namespace std;

class Student
{
private:
	int num;
	string name;
public:
	Student(int n, string nam)
	{
		cout << "constructor-" << n << endl;
		num = n;
		name = nam;
	}
	~Student()
	{
		cout << "destructor-" << num << endl;
	}
	void get_data();
};

void Student::get_data()
{
	if (num == 0)
		throw num;
	else
		cout << num << " " << name << endl;
	cout << "in get_data()" << endl;
}

void fun()
{
	Student stud1(1101, "Tan");
	stud1.get_data();
	Student stud2(0, "Li");
	stud2.get_data();
}

int main()
{
	cout << "main begin" << endl;
	cout << "call fun()" << endl;
	try
	{
		fun();
	}
	catch (int n)
	{
		cout << "num=" << n << ",error!" << endl;
	}
	cout << "main end" << endl;
	system("pause");
	return 0;
}