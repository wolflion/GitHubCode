// 20170829

// 例4.16 
#include <iostream>
using namespace std;

class BBank; // 预先说明，因为CBank中使用到BBank
class GBank;

class CBank   // 定义中国银行类 CBank
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
		cout << "输入中国银行存款数：";
		cin >> balance;
	}
	void disp()
	{
		cout << "中国银行存款数：" << balance << endl;
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
		cout << "输入工商银行存款数：";
		cin >> balance;
	}
	void disp()
	{
		cout << "工商银行存款数：" << balance << endl;
	}

	friend void total(CBank, BBank, GBank);
	~BBank()
	{
	}

private:
	int balance;
};

class GBank   //定义农业银行类
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
		cout << "输入农业银行存款数：";
		cin >> balance;
	}
	void disp()
	{
		cout << "农业银行存款数：" << balance << endl;
	}
	friend void total(CBank, BBank, GBank);

};

void total(CBank A, BBank B, GBank C)
{
	cout << "总存款数：" << A.balance + B.balance + C.balance << endl;
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