#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class ext_string :public string
{
public:
	int GetInt(string strText)//���ַ���ת��Ϊ����
	{
		int n = 0;
		stringstream os;
		os << strText;
		os >> n;
		return n;
	}
	string GetString(int n)//������ת��Ϊ�ַ���
	{
		string s;
		stringstream os;
		os << n;
		os >> s;
		return s;
	}
	string GetTrim(string strText)//ȥ�ַ�������ո�
	{
		strText.erase(0,strText.find_first_not_of(""));//ɾ����ո�
		strText.erase(0,strText.find_last_not_of("")+1);//ɾ���ҿո�
		return strText;
	}
};

int main(int argc,char* argv)
{
	ext_string ext_string;
	int n=ext_string.GetInt("123");//����"123"ת��Ϊ������
	string s1 = ext_string.GetString(456);//��������ת��Ϊ�ַ���
	string s2 = ext_string.GetTrim("hello");//ȥ����ո�
	cout << "The string '123'convert to integer is: " << n <<endl;
	cout << "The string 456 convert to string is: " << s1 <<endl;
	cout << "The string 'hello' erase spaceis:" << s2 << endl;
	return 0;
}