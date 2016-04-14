/*
 * 20160414
 * 友元成员函数
 */
#include <iostream>
using namespace std;

class STUDENT
{
public:
	STUDENT(int n, int a, float s):num(n),age(a),score(s){} // 构造函数 参数初始化表
	void total();
	//float average();// 定义为非静态成员函数时，在main中会出现“非静态成员函数的非法调用”
	static float average(STUDENT stu); // 静态成员函数,是类的一部分，而不是对象的一部分。
private:
	int num;
	int age;
	float score;
	static float sum; // 静态数据成员
	static int count;
};

void STUDENT::total()
{
	sum += score;
	count++;
}

float STUDENT::average(STUDENT stu)
{
	cout << stu.score <<endl;// 通过对象名引用非静态数据成员  {静态成员函数引用非静态数据成员的方法}
	return(sum/count);
}

float STUDENT::sum = 0;
int STUDENT::count = 0;


int main()
{
	// 定义对象数组并初始化
	STUDENT stud[3]={
		STUDENT(1001,18,70),
	    STUDENT(1002,19,78),
		STUDENT(1003,20,98)
	};
	int n;
	cout << "please input the number of students:";
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		stud[i].total();
	}
	cout << "the average score of " << n << "Student is " << STUDENT::average( stud[1]) << endl;
	system("pause");
	return 0;
}