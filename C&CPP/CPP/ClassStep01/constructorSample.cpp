/*
 * 20160415
 * 构造函数例子
 */

#include <iostream>
using namespace std;

class TIME{
public:
	void set_time();
	void show_time();
	TIME();  // 声明构造函数
	TIME(int,int,int);// 声明带参数构造函数
	//TIME(int h = 0,int m = 0, int s = 1); // 在声明构造函数时指定默认参数  {如果同时有TIME(); 会warning C4520:指定了多个默认构造函数}
private:
	//TIME();  // Effective C++里提到将默认构造函数私有化，这样TIME t2;就办法调用构造函数了。
	int iHour;
	int iMinute;
	int iSec;
};

TIME::TIME() // 定义构造函数
{
	iHour = 0;
	iMinute = 0;
	iSec = 0;
}

TIME::TIME(int h,int m,int s) // 定义有参构造函数
{
	iHour = h;
	iMinute = m;
	iSec = s;
}

void TIME::set_time()
{
	cin >> iHour;
	cin >> iMinute;
	cin >> iSec;
}

void TIME::show_time()
{
	cout << iHour<<":"<<iMinute<<":"<<iSec<<endl;
}


int main()
{
	//TIME t1;
	//t1.set_time();  // 在建立对象时，自动调动构造函数t1.TIME()。
	//t1.show_time();
	TIME t2; // 在建立对象时，自动调动构造函数t2.TIME()。
	t2.show_time();
	TIME t3(23,59,01);// 在建立对象时，自动调动构造函数t3.TIME(int,int,int)。
	t3.show_time();
	/*
	 * 错误的调用方式
	 */
	//TIME t4(20); // 调用的应该是TIME::TIME(const TIME &);无法从int转换

	system("pause");
	return 0;
}