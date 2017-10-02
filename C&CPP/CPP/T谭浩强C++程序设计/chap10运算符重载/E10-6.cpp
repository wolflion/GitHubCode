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
	Time operator++();  // 成员函数，省去了参数，这种声明前置自增运算符“++”重载函数
	Time operator++(int); // 第2步，声明后置自增运算符“++”重载函数
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

Time Time::operator++(int)
{
	Time temp(*this);
	sec++;
	if (sec >= 60)
	{
		sec -= 60;
		++minute;
	}
	return temp;
}

int main()
{
	Time time1(34, 0);
	for (int i = 0; i < 61;i++)
	{
		++time1;
		time1.display();
	}

	// 第2步
	Time time2(34, 59), time3;
	cout << "time2 :";
	time2.display();
	++time2;
	cout << "++time2: ";
	time2.display();

	time3 = time2++;
	cout << "time2++: ";
	time2.display();
	cout << "time3 :";
	time3.display();

	system("pause");
	return 0;
}