/*
 * 20160415
 * 析构函数例子
 */

#include <string>
#include <iostream>
using namespace std;

class STUDENT{
public:
	STUDENT(int n, string name, char s); // 声明构造函数
	~STUDENT();                          // 声明析构函数
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

void STUDENT::display() // 函数的返回值默认是int，所以必须要有返回值
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
} //  断点执行到此，才执行Destructor函数。

