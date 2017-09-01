// 20170901
// 5-22 声明一个类location，针对其重载运算符“+=”和“-=”

#include <iostream>
#include <string>
using namespace std;

class location
{
private:
	int x,y;
public:
	location()
	{
		x = 0;
		y = 0;
	}
	location(int val1,int val2)
	{
		x = val1;
		y = val2;
	}
	void operator+=(location ob)  // 重载运算符“+=”
	{
		x += ob.x;
		y += ob.y;
	}
	void operator-=(location ob)  // 重载运算符“-=”
	{
		//x = 
		x -= ob.x;
		//y = 
		y -= ob.y;
	}
	void display();
};

void location::display()
{
	cout<<"X="<<x<<endl<<"Y="<<y<<endl;
}

int main()
{
	location A(15,10),B(7,8);
	cout << "The location A is as following: " << endl;
	A.display();
	cout << "The location B is as following: " << endl;
	B.display();
	A += B;
	cout << "The location A += B is as following: " << endl;
	A.display();
	A -= B;
	cout<<"The location A-=B is as following: " << endl;
	A.display();
	system("pause");
	return 0;
}
