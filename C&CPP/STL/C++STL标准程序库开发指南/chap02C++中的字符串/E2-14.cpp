#include <iostream>
#include <string>
#include <memory>
using namespace std;

int main()
{
	string s("abcd");
	basic_string<char> s1(s.get_allocator()); // 定义容器s1
	basic_string<char>::allocator_type aT=s1.get_allocator();
	string::size_type se = s1.size();

	cout << se << endl;
	return 0;
}