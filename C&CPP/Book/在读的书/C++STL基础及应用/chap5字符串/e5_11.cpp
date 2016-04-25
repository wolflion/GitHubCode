#include <string>
#include <sstream>
#include <iostream>
using namespace std;

class ext_string :public string
{
public:
	int GetInt(string strText)//把字符串转化为整型
	{
		int n = 0;
		stringstream os;
		os << strText;
		os >> n;
		return n;
	}
	string GetString(int n)//把整型转化为字符串
	{
		string s;
		stringstream os;
		os << n;
		os >> s;
		return s;
	}
	string GetTrim(string strText)//去字符串两侧空格
	{
		strText.erase(0,strText.find_first_not_of(""));//删除左空格
		strText.erase(0,strText.find_last_not_of("")+1);//删除右空格
		return strText;
	}
};

int main(int argc,char* argv)
{
	ext_string ext_string;
	int n=ext_string.GetInt("123");//将串"123"转化为整型数
	string s1 = ext_string.GetString(456);//将整型数转化为字符串
	string s2 = ext_string.GetTrim("hello");//去两侧空格
	cout << "The string '123'convert to integer is: " << n <<endl;
	cout << "The string 456 convert to string is: " << s1 <<endl;
	cout << "The string 'hello' erase spaceis:" << s2 << endl;
	return 0;
}