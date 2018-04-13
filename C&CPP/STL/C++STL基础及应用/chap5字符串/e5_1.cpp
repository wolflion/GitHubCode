//string类减少了C语言编程中最常见的编程错误
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	// s1到s4是通过构造函数的方式来创建新字符串对象
	string s1;  //对象被创建，但不包含初始值
	string s2("How are you?");
	string s3(s2);
	string s4(s2,0,3);//源串s2，从偏移量0的字符开始连续取三个字符，构成新的字符串对象
	
	string s5 = "Fine";//s5是单一赋值，可直接把char型数组赋给s5
	string s6 = s2 + "Fine";//可将不同的初始化数据源结合在一起
	string s6error = "Fine" + s2;//编译不过；string对象赋值，等号右边第一项必须是string类型，不能是char型数组。
	return 0;
}