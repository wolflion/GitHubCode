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
 * ������ǰ��������,��ȫ�ֺ���
 */
void globalFun(TIME &t)
{
	cout << "It is globalFun() test!" << endl;
	// ������ t.iHour ���ɷ��ʵĴ���
	// cout << t.iHour << endl;
}

/*
 * 20160413 add 
 * ������ǰ����������������::��Ҳ����ȫ�ֺ���
 */
void ::classGlobalFun()
{
	cout << "It is classGlobalFun() test!" << endl;
}

/*
 * 20160413 add 
 * ��Ԫ����
 */
void friend_show(TIME &t)
{
	cout << t.iHour << ":" << t.iMinute << ":" << t.iSec << endl;
}