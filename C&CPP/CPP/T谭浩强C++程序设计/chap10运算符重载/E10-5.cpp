// 2017-09-28
#include <iostream>
using namespace std;

class Time{
private:
	int minute;
	int sec;
public:
	Time()
	{
		minute = 0;
		sec = 0;
	}
	Time(int m, int s) :minute(m), sec(s){} // 构造函数重载
	Time operator++();  // 成员函数，省去了参数
	void display()
	{
		cout << minute << ":" << sec << endl;
	}
};

Time Time::operator++()
{
	if (++sec >= 60)
	{
		sec -= 60;
		++minute;
	}
	return *this;  // 返回当前对象
}

int main()
{
	Time time1(34, 0);
	for (int i = 0; i < 61;i++)
	{
		++time1;
		time1.display();
	}
	system("pause");
	return 0;
}