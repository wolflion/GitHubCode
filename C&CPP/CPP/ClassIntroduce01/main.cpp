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
	 * ��Ԫ�����ĵ���
	 */
	TIME tFriend = TIME(time);
	friend_show(tFriend);

	/*
	 * 20160413
	 * ȫ�ֺ����ĵ���
	 */
	globalFun(tFriend);
	classGlobalFun();

	/*
	* 20160413
	* ����ĵ���
	* time.classGlobalFun(); //classGlobalFun����TIME��ĳ�Ա����
	*/
	system("pause");
	return 0;
}