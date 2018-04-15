// e7_14.cpp

#include<iostream>
#include<list>
#include<string>
using namespace std;

class Student {
private:
	string m_strNO;
	string m_strName;
	string m_strUniversity;
	int m_nTotal;

public:
	Student(string strNO, string strName, string strUniversity, int nTotal) :
		m_strNO(strNO), m_strName(strName), m_strUniversity(strUniversity), m_nTotal(nTotal)
	{
		// 这个语法叫啥，我不太记得了
	}

	string GetNo(){
		return m_strNO;
	}

	string GetName() { 
		return m_strName; 
	}
	
	string GetUniversity() {
		return m_strUniversity;
	}

	int GetTotal() {
		return m_nTotal;
	}

	bool operator<(Student &s)
	{
		return m_strNO < s.GetNo();
	}

	bool operator==(Student &s) {
		return m_strNO == s.GetNo();
	}
};

ostream& operator<< (ostream& os, Student& s) {
	os << s.GetNo() << "\t" << s.GetName() << "\t" << s.GetUniversity() << "\t" << s.GetTotal();
	return os;
}

typedef list<Student> LISTSTUD;

class StudManage {
private:
	LISTSTUD m_stlList;
public:
	bool Add(const Student& s){
		m_stlList.push_back(s);
		return true;
	}

	bool Merge(StudManage& stud) {
		m_stlList.sort();
		stud.m_stlList.sort();
		m_stlList.merge(stud.m_stlList);
		m_stlList.unique();
		return true;
	}

	void show() {
		for(LISTSTUD::iterator it=m_stlList.begin();it!=m_stlList.end();it++){
			cout << *it << endl;
		}
	}
};


int main(){
	StudManage  sm1;
	StudManage  sm2;
	Student s1("1001", "zhangsan", "tsinghua", 670);
	Student s2("1002", "lisi", "beida", 660);
	Student s3("1003", "wangwu", "fudan", 650);
	Student s4("1004", "zhaoliu", "nankai", 640);
	Student s5("1005", "zhouqi", "tongji", 630);

	sm1.Add(s1);
	sm1.Add(s2);
	sm1.Add(s5);

	sm2.Add(s5);
	sm2.Add(s4);
	sm2.Add(s3);
	sm2.Add(s1);

	sm1.Merge(sm2);
	sm1.show();

	getchar();
	return 0;
}