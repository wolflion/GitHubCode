/*
 * 20160413
 * 友元成员函数
 */

#include <iostream>
using namespace std;

class DATE;   // 对DATE类的提前引用声明

class TIME{
public:
	TIME(int, int, int);
	void display(DATE &); // 形参是DATE类对象的引用
private:
	int iHour;
	int iMinute;
	int iSec;
};

// 声明DATE类
class DATE{  
public:
	DATE(int, int, int);
	friend void TIME::display(DATE &); // 声明TIME类的display是本类的友元成员函数
private:
	int iYear;
	int iMonth;
	int iDay;
};

// 定义类TIME的构造函数
TIME::TIME(int h, int m, int s)
{
	iHour = h;
	iMinute = m;
	iSec = s;
}

// 定义display
void TIME::display(DATE &d)
{
	// 输出DATE类的私有成员
	cout << d.iYear << d.iMonth << d.iDay << endl;
	// 输出自己类的私有成员
	cout << iHour << ":" << iMinute << ":" << iSec << endl;
}

// 定义类DATE的构造函数
DATE::DATE(int y, int m, int d)
{
	iYear = y;
	iMonth = m;
	iDay = d;
}


int main()
{
	TIME t(15,23,56);
	DATE d(2016,4,13);
	t.display(d); // 实参是DATE类对象d
	system("pause");
	return 0;
}