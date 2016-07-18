/*
 * 使用成员运算符函数，针对类three_d重载"=="和"!="运算符
 */

#include <iostream>
using namespace std;

class three_d
{
	int A,B,C;
public:
	three_d(int i,int j, int k)
	{
		A = i;
		B = j;
		C = k;
	}
	three_d()
	{
		A = 0;
		B = 0;
		C = 0;
	}
	int operator==(three_d ob2);
	int operator!=(three_d ob2);
};

int three_d::operator==(three_d ob2)
{
	return(A==ob2.A &&B==ob2.B&&C==ob2.C);
}

int three_d::operator!=(three_d ob2)
{
	return(A != ob2.A && B != ob2.B && C!=ob2.C);
}

int main()
{
	three_d op1(10,10,10),op2(2,3,4);
	if (op1 == op2)
	{
		std::cout<<"op1 == op2\n";
	}
	if (op1 != op2)
	{
		std::cout<<"op1 != op2\n";
	}
	system("pause");
	return 0;
}