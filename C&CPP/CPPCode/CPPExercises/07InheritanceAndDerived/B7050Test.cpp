// 2017-09-06
// 例7.50 编写一个程序，实现医学院教师（兼任医生）的数据操作
// 这是本章的最后一道题

#include <iostream>
#include <string.h> // 与#include<string>区别？
using namespace std;

class person
{
	int bh;  // 编号
	char xm[10]; //姓名
public:
	void setperson(int bh1, char xm1[])
	{
		bh = bh1;
		strcpy(xm,xm1);
	}
	void dispperson()
	{
		cout << "编号：" << bh << endl;
		cout << "姓名：" << xm << endl;
	}
};

class teacher:virtual public person
{
	char xb[20];  // 所在系
	char zc[10];  // 职称
public:
	void setteacher(char xb1[], char zc1[])
	{
		strcpy(xb,xb1);
		strcpy(zc,zc1);
	}
	void dispteacher()
	{
		cout << "系别：" << xb << endl;
		cout << "职称：" << zc << endl;
	}
};

class doctor:virtual public person
{
	char ks[20];  //科室
	char zy[20];  // 研究专业
public:
	void setdoctor(char ks1[],char zy1[])
	{
		strcpy(ks,ks1);
		strcpy(zy,zy1);
	}
	void dispdoctor()
	{
		cout << "科室：" << ks << endl;
		cout << "专业：" << zy << endl;
	}
};

class techdoc:public teacher,public doctor
{
public:
	void settechdoc(int bh1,char xm1[],char xb1[],char zc1[],char ks1[],char zy1[])
	{
		setperson(bh1,xm1);
		setteacher(xb1,zc1);
		setdoctor(ks1,zy1);
	}
	void disptechdoc()
	{
		dispperson();
		dispteacher();
		dispdoctor();
	}
};

int main()
{
	techdoc obj;
	obj.settechdoc(139,"李华","基础医学系","教授","内科","心血管");
	obj.disptechdoc();
	system("pause");
	return 0;
}