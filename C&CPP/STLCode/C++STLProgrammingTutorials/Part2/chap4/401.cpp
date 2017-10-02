#include <vector>  // 向量vector的模板块
#include <iostream>
#include <string>

int main(void)
{
	using namespace std; // 写在这也无所谓，就像effectiveC++里讲的范围一样
	std::vector<string> vec;   // 创建向量对象vec
	std::vector<string>::const_iterator i;  // 相当于指针的迭代器（游标）

	vec.push_back("dog");
	vec.push_back("bird");
	vec.push_back("girl");
	vec.push_back("boy");
	vec.push_back("Hello,there");

	for (int i = vec.begin(); i !=vec.end(); ++i)
	{
		/* code */
		cout << (*i) << endl;
	}
}

