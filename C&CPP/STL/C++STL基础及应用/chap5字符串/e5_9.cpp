/*
 * 20160425
 * e5_9.cpp 利用STL拆分字符串
 */

#include <iostream>
#include <sstream>
#include <string>
using namespace std;

# if 0
int main(int argc, char* argv[])
{
	string strText = "How are you?";  // 源串
	string strSeparator = " ";        // 按空格拆分
	string strResult;                 // 拆分结果串
	int size_pos = 0;                 // 拆分子串结束位置
	int size_prev_pos = 0;            // 拆分子串起始位置

	while((size_pos = strText.find_first_of(strSeparator,size_pos)) != string::npos) // 找到子串
	{
		// 取子串
		strResult = strText.substr(size_prev_pos,size_pos-size_prev_pos);
		cout << "string=" << strResult << endl;
		size_prev_pos = ++size_pos;   // 下一子串起始位置,结束位置=当前子串结束位置+1
	}

	// 判断有无最后一个子串
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
	istringstream istr(strText);   // 用字符串输入流封装字符串

	while(!istr.eof())  // 当非字符串输入流末尾
	{
		istr >> strResult;  // 读输入流并给变量赋值
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
	istringstream istr(strText);   // 用字符串输入流封装字符串

	while(!istr.eof())  // 当非字符串输入流末尾
	{
		//istr >> strResult;  // 读输入流并给变量赋值
		getline(istr, strResult,',');  // 读输入流并给变量赋值
		cout << "string=" << strResult << endl;
	}
	system("pause");
	return 0;
}