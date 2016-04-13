#include <iostream>
#include "Time.h"
using namespace std;

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

/*
 * 20160413 add 
 * 函数名前不加类名,是全局函数
 */
void globalFun(TIME &t)
{
	cout << "It is globalFun() test!" << endl;
	// 将出现 t.iHour 不可访问的错误
	// cout << t.iHour << endl;
}

/*
 * 20160413 add 
 * 函数名前不加类名，但加了::，也是类全局函数
 */
void ::classGlobalFun()
{
	cout << "It is classGlobalFun() test!" << endl;
}

/*
 * 20160413 add 
 * 友元函数
 */
void friend_show(TIME &t)
{
	cout << t.iHour << ":" << t.iMinute << ":" << t.iSec << endl;
}