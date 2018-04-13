/*
 * 20160428
 * e7_6.cpp ����vector��һ��ѧ����Ϣ�����࣬����Ӻ�������ѯ��������ʾ������������
 */

#include <iostream>
#include <vector>
#include <string>
using namespace std;

class Student{
public:
	string m_strNO;   // ѧ��
	string m_strName; // ����
	string m_strSex;  // �Ա�
	string m_strDate; // ��������

	Student(string strNO, string strName, string strSex, string strDate):
	m_strNO(strNO),m_strName(strName),m_strSex(strSex),m_strDate(strDate){}

	void Display();
};

void Student::Display() // ��Ҫ���Ƿ���ֵ void
{
	cout << m_strNO << "\t" << m_strName << "\t" << m_strSex << "\t" << m_strDate << endl;
}

// ѧ��������
class StudCollect{
public:
	void Add(Student& s);
	Student* Find(string strNO);
private:// ��������û��дprivate:
	vector <Student>m_vStud;  // ����һ����Ա����
};

void StudCollect::Add(Student& s)
{
	m_vStud.push_back(s); // ����β������һ������
}

Student* StudCollect::Find(string strNO)
{
	bool bFind = false;
	int i = 0;
	for (i = 0; i<m_vStud.size(); i++)
	{
		Student& s = m_vStud.at(i); // ����iλ��Ԫ�ص����� 
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