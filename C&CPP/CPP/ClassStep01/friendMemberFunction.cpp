/*
 * 20160413
 * ��Ԫ��Ա����
 */

#include <iostream>
using namespace std;

class DATE;   // ��DATE�����ǰ��������

class TIME{
public:
	TIME(int, int, int);
	void display(DATE &); // �β���DATE����������
private:
	int iHour;
	int iMinute;
	int iSec;
};

// ����DATE��
class DATE{  
public:
	DATE(int, int, int);
	friend void TIME::display(DATE &); // ����TIME���display�Ǳ������Ԫ��Ա����
private:
	int iYear;
	int iMonth;
	int iDay;
};

// ������TIME�Ĺ��캯��
TIME::TIME(int h, int m, int s)
{
	iHour = h;
	iMinute = m;
	iSec = s;
}

// ����display
void TIME::display(DATE &d)
{
	// ���DATE���˽�г�Ա
	cout << d.iYear << d.iMonth << d.iDay << endl;
	// ����Լ����˽�г�Ա
	cout << iHour << ":" << iMinute << ":" << iSec << endl;
}

// ������DATE�Ĺ��캯��
DATE::DATE(int y, int m, int d)
{
	iYear = y;
	iMonth = m;
	iDay = d;
}


int main()
{
	TIME t(15,23,56);
	DATE d(2016,4,13);
	t.display(d); // ʵ����DATE�����d
	system("pause");
	return 0;
}