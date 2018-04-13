/*
 * 20160426
 * e4_15.cpp ´ÓÎÄ±¾ÎÄ¼þÖÐ¶ÁÈëÃ¿¸öÑ§ÉúµÄ¸÷¿Æ³É¼¨£¬²¢ÔÚÆÁÄ»ÉÏÏÔÊ¾Ñ§Éú¸÷¿Æ³É¼¨¼°×Ü³É¼¨
 */

#include <iostream>
#include <sstream>
#include <fstream>
#include <string>
using namespace std;

#if 0
int main(int argc, char* argv[])
{
	ifstream in("d:\\data.txt");
	string strText;  
	string strName;  // Ñ§ÉúÐÕÃû
	int nYuwen;      // ÓïÎÄ³É¼¨
	int nMath; 
	int nForeign;
	int nTotal;

	while(!in.eof())
	{
		// ¶ÁÃ¿ÐÐÎÄ±¾Êý¾Ý±£´æÖÁ×Ö·û´®
		getline(in, strText);
		// °Ñ¸ÃÎÄ±¾´®·â×°³É×Ö·û´®ÊäÈëÁ÷¶ÔÏó
		istringstream inf(strText);

		inf >> strName >> nYuwen >> nMath >> nForeign;

		nTotal = nYuwen + nMath + nForeign;
		cout << strName << "\t" << nYuwen << "\t" << nMath << "\t" << nForeign << "\t" << nTotal << endl;
	}

	in.close();

	system("pause");
	return 0;
}
#endif

class Student
{
public:
	string strName;
	int nYuwen;
	int nMath;
	int nForeign;
};

istream& operator>> (istream& is, Student& s)
{
	is >> s.strName >> s.nYuwen >> s.nMath >> s.nForeign;
	return is;
}

ostream& operator>> (ostream& os, Student& s)
{
	int nTotal = s.nYuwen + s.nMath + s.nForeign;
	os << s.strName << "\t" << s.nYruwen << "\t" << s.nMath << "\t" << s.nForeign << "\t" << nTotal << "\n";
	return os;
}

int main(int argc, char* argv[])
{
	ifstream in("d:\\data.txt");
	Student s;
	while(!in.eof())
	{
		in >> s;
		cout << s;
	}
	in.close();

	system("pause");
	return 0;
}
