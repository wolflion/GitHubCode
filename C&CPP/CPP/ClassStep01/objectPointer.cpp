/*
 * 20160416
 * �йض���ָ����÷�
 */


#include <iostream>
using namespace std;

class Time{
public:
	Time(int,int,int);
	void get_time();
//private:         // ������private���޷�����hour���ݳ�Ա
	int hour;
	int minute;
	int sec;
};

Time::Time(int h,int m,int s)
{
	hour = h;
	minute = m;
	sec = s;
}

void Time::get_time()
{
	cout << hour << ":" << minute << ":"  << sec  << endl;
}

int main()
{
	Time t1(10,13,56);
	int *p1 = NULL;  // ����ָ���������ݵ�ָ�����p1 
	p1 = &t1.hour;  // p1ָ��t1.hour
	cout << *p1 << endl;
	t1.get_time();
	Time *p2 = NULL;  // ����ָ��Time���͵�ָ�����p2
	p2 = &t1;      // p2ָ��t1
	p2->hour = 15; // �Լ��ı������ֵ
	p2->get_time();
	void (Time:: *pf3)(); // ����ָ��Time�๫�ó�Ա������ָ�����pf3
	pf3 = &Time::get_time; // pf3ָ��Time���get_time()
	(t1.*pf3)();

	system("pause");
	return 0;
}