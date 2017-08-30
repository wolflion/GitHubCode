// 20170829

// ��4.16 
#include <iostream>
using namespace std;

class BBank; // Ԥ��˵������ΪCBank��ʹ�õ�BBank
class GBank;

class CBank   // �����й������� CBank
{
public:
	CBank()  // default construtor
	{
		balance = 0;
	}
	CBank(int b)  // constructor
	{
		balance = b;
	}
	void getbalance()
	{
		cout << "�����й����д������";
		cin >> balance;
	}
	void disp()
	{
		cout << "�й����д������" << balance << endl;
	}

	friend void total(CBank, BBank, GBank);

	~CBank()
	{
	}

private:
	int balance;
};

class BBank
{
public:
	BBank()
	{
		balance = 0;
	}
	BBank(int b)
	{
		balance = b;
	}
	void getbalance()
	{
		cout << "���빤�����д������";
		cin >> balance;
	}
	void disp()
	{
		cout << "�������д������" << balance << endl;
	}

	friend void total(CBank, BBank, GBank);
	~BBank()
	{
	}

private:
	int balance;
};

class GBank   //����ũҵ������
{
private:
	int balance;
public:
	GBank()
	{
		balance = 0;
	}
	GBank(int b)
	{
		balance = b;
	}
	void getbalance()
	{
		cout << "����ũҵ���д������";
		cin >> balance;
	}
	void disp()
	{
		cout << "ũҵ���д������" << balance << endl;
	}
	friend void total(CBank, BBank, GBank);

};

void total(CBank A, BBank B, GBank C)
{
	cout << "�ܴ������" << A.balance + B.balance + C.balance << endl;
}

int main()
{
	CBank X(100);
	BBank Y;
	GBank Z;
	X.disp();
	Y.disp();
	Z.disp();
	Y.getbalance();
	Z.getbalance();
	total(X, Y, Z);
	system("pause");
	return 0;
}