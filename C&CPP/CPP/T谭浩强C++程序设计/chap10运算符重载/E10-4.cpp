// 2017-09-28
#include <iostream>
using namespace std;

class StringC
{
public:
	StringC()   // 默认构造函数
	{
		p = NULL;
	}
	StringC(char *str);  // 构造函数
	friend bool operator>(StringC &string1, StringC &string2);  // 第1步增加
	friend bool operator<(StringC &string1, StringC &string2);  // 第2步增加
	friend bool operator==(StringC &string1, StringC &string2);  // 第2步增加
	void display();
private:
	char *p;
};

StringC::StringC(char *str)
{
	p = str;
}
bool operator>(StringC &string1, StringC &string2)
{
	if (strcmp(string1.p, string2.p) > 0)
		return true;
	else
		return false;
}

bool operator<(StringC &string1, StringC &string2)
{
	if (strcmp(string1.p, string2.p) < 0)
		return true;
	else
		return false;
}

bool operator==(StringC &string1, StringC &string2)
{
	if (strcmp(string1.p, string2.p) == 0)
		return true;
	else
		return false;
}

void compare(StringC &string1, StringC &string2) // 第3步添加  函数，跟类完全没关系
{
	if (operator>(string1,string2) == 1)
	{
		string1.display();
		cout << ">";
		string2.display();
	}
	else if (operator<(string1,string2)==1)
	{
		string1.display();
		cout << "<";
		string2.display();
	}
	else
	{
		if (operator==(string1,string2)==1)
		{
			string1.display();
			cout << "=";
			string2.display();
		}
	}
	cout << endl;
}

// 忘记写函数返回类型了
void StringC::display()  
{
	cout << p;
}

int main()
{
	StringC string1("Hello"), string2("Book"),string3("Computer"),string4("Hello");
	string1.display();
	cout << endl;
	string2.display();
	cout << endl;

	cout << (string1 > string2) << endl;
	cout << (string1 < string3) << endl;
	cout << (string1 == string2) << endl;

	compare(string1, string2);
	compare(string2, string3);
	compare(string1, string4);
	system("pause");
	return 0;
}