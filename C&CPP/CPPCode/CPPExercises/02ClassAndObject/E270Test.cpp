// 20170828

#include <iostream> //#include <iostream.h>啥区别？
#include <stdlib.h>

using namespace std;

/** 2.2.5 编程题 **/
// 例2.70  编写CDate类，满足（1）可用日/月/年格式输出日期 （2）可运行日期加一天的操作（3）设置日期
class CDate{
	int m_nDay;
	int m_nMonth;
	int m_nYear;
public:
	CDate();
	CDate(int day,int month,int year);
	void Display();
	void AddDay();
	void SetDate(int day,int month,int year);
	~CDate();
private:
	bool IsLeapYear();   //是否闰年
};

CDate::CDate() {} // 类外定义就必须要加::修饰符，默认构造函数  没有{}，加;后只是申请，就重复了
CDate::CDate(int day, int month, int year)
{
	m_nDay = day;
	m_nMonth = month;
	m_nYear = year;
}

void CDate::Display()
{
	char day[3];
	char month[3];
	char year[5];
	_itoa_s(m_nDay, day, 10); // 将十进制转换为字符串day
	_itoa_s(m_nMonth, month, 10);
	_itoa_s(m_nYear, year, 10);  //itoa()报c4996错误
	cout << day << "/" << month << "/" << year << endl;
}

void CDate::AddDay()
{
	m_nDay++;
	//处理2月份的情况
	if (IsLeapYear())
	{
		if ((m_nMonth == 2) && (m_nDay == 30))
		{
			m_nMonth++;
			m_nDay = 1;
			return;
		}
	}
	else
	{
		if ((m_nMonth == 2) && (m_nDay == 29))
		{
			m_nMonth++;
			m_nDay = 1;
			return;
		}
	}
	//处理日号大于31的情况
	if (m_nDay>31)
	{
		if (m_nMonth == 12)
		{
			m_nYear++;
			m_nMonth = 1;
			m_nDay = 1;
		}
		else
		{
			m_nMonth++;
			m_nDay = 1;
		}
	}
	//处理日号为30的情况
	else if (m_nDay == 31)
	{
		//4,6,9,11月只有30天
		if (m_nMonth ==4 || m_nMonth==6 || m_nMonth==9 || m_nMonth==11)
		{
			m_nMonth++;
			m_nDay = 1;
		}
	}
}

void CDate::SetDate(int year, int month, int day)
{
	m_nDay = day;
	m_nMonth = month;
	m_nYear = year;
}

CDate::~CDate()
{

}

bool CDate::IsLeapYear()
{
	bool bLeap;
	if (m_nYear%4!=0)
	{
		bLeap = false;
	}
	else if (m_nYear % 100 != 0)
	{
		bLeap = true;
	}
	else if ((m_nYear % 400 != 0))
	{
		bLeap = false;
	}
	else
		bLeap = true;
	return bLeap;
}

void E270Test()
{
	CDate d;
	d.SetDate(2012, 2, 28);
	cout << "当前日期：";
	d.Display(); //28/2/2012
	d.AddDay();
	cout << "当前日期加1：";
	d.Display(); //29/2/2012
}

int main()
{
	E270Test();
	return 0;
}