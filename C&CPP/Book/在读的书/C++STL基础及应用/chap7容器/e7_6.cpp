/*
 * 20160428
 * e7_6.cpp 利用vector编一个学生信息管理类，有添加函数，查询函数，显示函数，并测试
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student{
public:
	string m_strNO;   // 学号
	string m_strName; // 姓名
	string m_strSex;  // 性别
	string m_strDate; // 出生日期

	Student(string strNO, string strName, string strSex, string strDate):
	m_strNO(strNO),m_strName(strName),m_strSex(strSex),m_strDate(strDate){}

	void Display();
};

void Student::Display() // 不要忘记返回值 void
{
	cout << m_strNO << "\t" << m_strName << "\t" << m_strSex << "\t" << m_strDate << endl;
}

// 学生集合类
class StudCollect{
public:
	void Add(Student& s);
	Student* Find(string strNO);
private:// 书中例子没有写private:
	vector <Student>m_vStud;  // 定义一个成员变量
};

void StudCollect::Add(Student& s)
{
	m_vStud.push_back(s); // 向量尾部增加一个数据
}

Student* StudCollect::Find(string strNO)
{
	bool bFind = false;
	int i = 0;
	for (i = 0; i<m_vStud.size(); i++)
	{
		Student& s = m_vStud.at(i); // 返回i位置元素的引用 
		if (s.m_strNO == strNO)
		{
			bFind = true;
			break;
		}
	}
	Student* s = NULL;
	if(bFind)
		s = &m_vStud.at(i);
	return s;
}

int main()
{
	Student s1("1001","zhangsan","boy","1985-10-10");
	Student s2("1002","lisi","boy","1984-6-10");
	Student s3("1003","wangwu","boy","1985-11-15");

	StudCollect s;
	s.Add(s1),s.Add(s2),s.Add(s3);

	Student* ps = s.Find("1002");
	if(ps)
		ps->Display();

	system("pause");
	return 0;
}