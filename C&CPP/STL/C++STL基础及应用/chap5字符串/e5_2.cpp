//字符串迭代器创建方式
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	string s1 = "How are you?";
	string s2(s1.begin(),s1.end());
	// 将string看作字符的容器对象
	string s3(s1.begin()+4,s1.begin()+7);//迭代器
	return 0;
}