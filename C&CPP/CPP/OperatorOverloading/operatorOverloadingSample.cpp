/*
 * 20160415
 * 重载运算符"+"
 */

#include <iostream>
using namespace std;

class COMPLEX{
public:
	COMPLEX();
	COMPLEX(double r, double i);
	COMPLEX operator + (COMPLEX &c2);// 声明重载运算符"+"
	void display();
private:
	double dReal;
	double dImag;
};

COMPLEX::COMPLEX()
{
	dReal = 0;
	dImag = 0;
}

COMPLEX::COMPLEX(double r, double i)
{
	dReal = r;
	dImag = i;
}

COMPLEX COMPLEX::operator+(COMPLEX &c2)
{
	COMPLEX c;
	c.dReal = dReal + c2.dReal;
	c.dImag = dImag + c2.dImag;
	return c;
}

void COMPLEX::display()
{
	cout << "(" << dReal << "," << dImag << "i)" << endl;
}

int main()
{
	COMPLEX c1(3,4),c2(5,-10),c3;
	c3 = c1 + c2;
	cout << "c1=";
	c1.display();
	cout << "c2=";
	c2.display();
	cout << "c1 + c2 =";
	c3.display();

	system("pause");
	return 0;
}