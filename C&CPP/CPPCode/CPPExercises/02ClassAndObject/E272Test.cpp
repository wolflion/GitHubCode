// 20170828

// 例2.72 用类的方法求n!，并输出5!
#include <iostream>
using namespace std;

class Fn
{
	int value; //存放n
	int fact; //存放n!
public:
	Fn(int value);
	void Cal();
	void disp();
};

Fn::Fn(int val)
{
	value = val;
	fact = 1;
}

void Fn::Cal()
{
	int i = value;
	while (i>1)
	{
		fact *= i--;
	}
}

void Fn::disp()
{
	cout << value << "!=" << fact << endl;
}

int main()
{
	Fn A(5);
	A.Cal();
	A.disp();
	system("pause");
	return 0;
}