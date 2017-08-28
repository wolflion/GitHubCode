// 20170828
#include <iostream>
using namespace std;

class Student
{
public:
	Student();
	~Student();
	void getscore(); // 获取学生成绩
	void display();  // 显示学生成绩
	//void sort(Student *); //这个就没实现，直接在main()里干了
private:
	int english, computer, total;
};

Student::Student()
{
}

Student::~Student()
{
}

void Student::getscore()
{
	cout << "输入英语成绩：";
	cin >> english;
	cout << "输入计算机成绩：";
	cin >> computer;
	total = english + computer;
}

void Student::display()
{
	cout << "英语=" << english << "计算机=" << computer << "总分=" << total << endl;
}

int main()
{
	Student *A[3], *tmp;
	int i, n = 3;
	for (int  j = 0; j < n; j++)
	{
		A[j] = new Student;//分配内存
		cout << "学生" << j + 1 << endl;
		A[j]->getscore();
	}

	//冒泡排序
	for (int j = 0; j < n - 1; j++)
		for (i = 0; i < n - 1;i++)
		{
			tmp = A[i];
			A[i] = A[i + 1];
			A[i + 1] = tmp;
		}

	cout << endl << "排序结果如下：" << endl;
	for (i = 0; i < n;i++)
	{
		A[i]->display();
	}
	system("pause");
	return 0;
}