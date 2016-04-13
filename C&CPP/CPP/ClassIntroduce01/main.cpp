#include <iostream>
#include "Time.h"
using namespace std;

int main()
{
	TIME time;

	time.set_time();
	time.show_time();

	/*
	 * 20160413
	 * 友元函数的调用
	 */
	TIME tFriend = TIME(time);
	friend_show(tFriend);

	/*
	 * 20160413
	 * 全局函数的调用
	 */
	globalFun(tFriend);
	classGlobalFun();

	/*
	* 20160413
	* 错误的调用
	* time.classGlobalFun(); //classGlobalFun不是TIME类的成员函数
	*/
	system("pause");
	return 0;
}