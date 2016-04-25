/*
 * 20160425
 * e5_9.cpp ����STL����ַ���
 */

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

# if 0
int main(int argc, char* argv[])
{
	string strText = "How are you?";  // Դ��
	string strSeparator = " ";        // ���ո���
	string strResult;                 // ��ֽ����
	int size_pos = 0;                 // ����Ӵ�����λ��
	int size_prev_pos = 0;            // ����Ӵ���ʼλ��

	while((size_pos = strText.find_first_of(strSeparator,size_pos)) != string::npos) // �ҵ��Ӵ�
	{
		// ȡ�Ӵ�
		strResult = strText.substr(size_prev_pos,size_pos-size_prev_pos);
		cout << "string=" << strResult << endl;
		size_prev_pos = ++size_pos;   // ��һ�Ӵ���ʼλ��,����λ��=��ǰ�Ӵ�����λ��+1
	}

	// �ж��������һ���Ӵ�
	if (size_prev_pos != strText.size())
	{
		strResult = strText.substr(size_prev_pos,size_pos-size_prev_pos);
		cout << "string= " << strResult << endl;
	}
	system("pause");
	return 0;
}
#endif

#if 0
int main(int argc, char* argv[])
{
	string strResult = "";
	string strText = "How are you";
	istringstream istr(strText);   // ���ַ�����������װ�ַ���

	while(!istr.eof())  // �����ַ���������ĩβ
	{
		istr >> strResult;  // ������������������ֵ
		cout << "string=" << strResult << endl;
	}
	system("pause");
	return 0;
}
#endif

int main(int argc, char* argv[])
{
	string strResult = "";
	string strText = "How,are,you";
	istringstream istr(strText);   // ���ַ�����������װ�ַ���

	while(!istr.eof())  // �����ַ���������ĩβ
	{
		//istr >> strResult;  // ������������������ֵ
		getline(istr, strResult,',');  // ������������������ֵ
		cout << "string=" << strResult << endl;
	}
	system("pause");
	return 0;
}