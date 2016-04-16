/*
 * 20160416
 * 有关对象指针的用法
 */


#include <iostream>
using namespace std;

class Time{
public:
	Time(int,int,int);
	void get_time();
//private:         // 定义了private后，无法访问hour数据成员
	int hour;
	int minute;
	int sec;
};

Time::Time(int h,int m,int s)
{
	hour = h;
	minute = m;
	sec = s;
}

void Time::get_time()
{
	cout << hour << ":" << minute << ":"  << sec  << endl;
}

int main()
{
	Time t1(10,13,56);
	int *p1 = NULL;  // 定义指向整型数据的指针变量p1 
	p1 = &t1.hour;  // p1指向t1.hour
	cout << *p1 << endl;
	t1.get_time();
	Time *p2 = NULL;  // 定义指向Time类型的指针变量p2
	p2 = &t1;      // p2指向t1
	p2->hour = 15; // 自己改变了这个值
	p2->get_time();
	void (Time:: *pf3)(); // 定义指向Time类公用成员函数的指针变量pf3
	pf3 = &Time::get_time; // pf3指向Time类的get_time()
	(t1.*pf3)();

	system("pause");
	return 0;
}