/*
 * 20160416
 * 对象的常引用
 */


#include <iostream>
using namespace std;

class Time{
public:
	Time(int,int,int);
	int hour;
	int minute;
	int sec;
};

Time::Time(int h,int m,int s)
{
	hour = h; //将hour定义为const,这一行报错
	minute = m;
	sec = s;
}

//void fun(const Time &t)
void fun(Time &t)
{
	t.hour = 18;
}

int main()
{
	Time t1(10,13,56);
	fun(t1);
	cout << t1.hour << endl;
	
	system("pause");
	return 0;
}