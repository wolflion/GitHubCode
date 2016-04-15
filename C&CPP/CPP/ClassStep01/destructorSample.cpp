/*
 * 20160415
 * ������������
 */

#include <string>
#include <iostream>
using namespace std;

class STUDENT{
public:
	STUDENT(int n, string name, char s); // �������캯��
	~STUDENT();                          // ������������
	void display();                     
private:
	int iNum;
	string sName;
	char cSex;
};

STUDENT::STUDENT(int n, string name, char s)
{
	iNum = n;
	sName = name;
	cSex = s;
	cout << "Constructor called. \n " << endl;
}

STUDENT::~STUDENT()
{
	cout << "Destructor called. \n " << iNum << endl;
}

void STUDENT::display() // �����ķ���ֵĬ����int�����Ա���Ҫ�з���ֵ
{
	cout << "num: " << iNum << endl;
	cout << "name: " << sName << endl;
	cout << "sex: " << cSex << endl;
}

int main()
{
	STUDENT std1(10010,"WangLi",'f');
	std1.display();

	STUDENT std2(10011,"LiuLi",'m');
	std2.display();
	
	system("pause");
	return 0; 
} //  �ϵ�ִ�е��ˣ���ִ��Destructor������

