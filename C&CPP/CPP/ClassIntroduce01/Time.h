#include <iostream>
using namespace std;

class TIME{
public:
	void set_time();
	void show_time();
	// ����ͨ��������Ϊ��Ԫ����
	friend void  friend_show(TIME &);
private:
	int iHour;
	int iMinute;
	int iSec;
};

/*
 * 20160413
 * ȫ�ֺ���������
*/
void globalFun(TIME &);
void classGlobalFun();
