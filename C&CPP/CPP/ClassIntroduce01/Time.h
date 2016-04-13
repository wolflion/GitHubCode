#include <iostream>
using namespace std;

class TIME{
public:
	void set_time();
	void show_time();
	// 将普通函数声明为友元函数
	friend void  friend_show(TIME &);
private:
	int iHour;
	int iMinute;
	int iSec;
};

/*
 * 20160413
 * 全局函数的声明
*/
void globalFun(TIME &);
void classGlobalFun();
