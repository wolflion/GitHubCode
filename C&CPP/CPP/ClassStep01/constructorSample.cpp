/*
 * 20160415
 * ���캯������
 */

#include <iostream>
using namespace std;

class TIME{
public:
	void set_time();
	void show_time();
	TIME();  // �������캯��
	TIME(int,int,int);// �������������캯��
	//TIME(int h = 0,int m = 0, int s = 1); // ���������캯��ʱָ��Ĭ�ϲ���  {���ͬʱ��TIME(); ��warning C4520:ָ���˶��Ĭ�Ϲ��캯��}
private:
	//TIME();  // Effective C++���ᵽ��Ĭ�Ϲ��캯��˽�л�������TIME t2;�Ͱ취���ù��캯���ˡ�
	int iHour;
	int iMinute;
	int iSec;
};

TIME::TIME() // ���幹�캯��
{
	iHour = 0;
	iMinute = 0;
	iSec = 0;
}

TIME::TIME(int h,int m,int s) // �����вι��캯��
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
	//t1.set_time();  // �ڽ�������ʱ���Զ��������캯��t1.TIME()��
	//t1.show_time();
	TIME t2; // �ڽ�������ʱ���Զ��������캯��t2.TIME()��
	t2.show_time();
	TIME t3(23,59,01);// �ڽ�������ʱ���Զ��������캯��t3.TIME(int,int,int)��
	t3.show_time();
	/*
	 * ����ĵ��÷�ʽ
	 */
	//TIME t4(20); // ���õ�Ӧ����TIME::TIME(const TIME &);�޷���intת��

	system("pause");
	return 0;
}