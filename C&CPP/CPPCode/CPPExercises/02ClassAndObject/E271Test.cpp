// 20170828

// 主要是考察构造函数的用法
#include <iostream>
using namespace std;

class Tc
{
public:
	Tc(){ unprice = 17; price = 16; } // 默认构造函数
	~Tc();
	void getdata()
	{
		cout << "无铅汽油总量：";
		cin >> unlead;
		cout << "有铅汽油总量：";
		cin >> lead;
		total = unprice*unlead + price*lead;
	}
	void disp()
	{
		cout << "总收入：" << total << endl;
	}

private:
	int unprice, price; // 无铅汽油和有铅汽油的单价
	double unlead, lead, total;// 无铅汽油、有铅汽油、总收入
};

//Tc::Tc()
//{
//}

Tc::~Tc()
{
}

int main()
{
	Tc A;
	A.getdata();
	A.disp();
	return 0;
}
