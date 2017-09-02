// 来自于 陈维兴《C++面向对象程序设计习题解析与上机指导》的Part3 习题参考答案

#include <iostream>
#include <string>
using namespace std;
class score
{
public:
	void setscore(float f)
	{
		english_score = f;
	}

	void printscore()
	{
		cout << "English_score is" << english_score << endl;
	}

private:
	float english_score;
};

void scoreTest()
{
	score stu1, stu2;
	stu1.setscore(85.5);
	stu2.setscore(93.5);
	stu1.printscore();
	stu2.printscore();
}

// 例3-8 完成计算器类的实现 
class counter
{
public:
	counter(int number);
	void increment(); // 给原值加1
	void decrement(); // 给原理减1
	int getvalue();  // 取得计数器值
	void print();  //显示计数器值

private:
	int value;
};

counter::counter(int number)
{
	value = number;
}

void counter::increment()
{
	value++;
}

void counter::decrement()
{
	value--;
}
int counter::getvalue()
{
	return value;
}
void counter::print()
{
	cout << "value is " << value << endl;
}

// 练习3-9
class string39
{
public:
	string39(char *s);
	//~string39();
	void showstr();
	int strlength();
	char* concat(char *ch);

private:
	char *contents;
	int length;
};

string39::string39(char *s)
{
	length = strlen(s);
	contents = new char[length + 1];
	strcpy_s(contents,length+1, s);
}

//string39::~string39()
//{
//	delete contents;  // 这一行会报异常？
//}

void string39::showstr()
{
	cout << contents << endl;
}

int string39::strlength()
{
	return length;
}

char* string39::concat(char *ch)
{
	int len = strlen(ch);
	//strncat_s(contents, strlen(contents)+1, ch, len);
	strncat_s(contents, len*2,ch, len);//strncat，第二个参数的长度应该是来看contents的长度，但实践下来不对
	length = strlen(contents);
	return contents;
}

void string39Test()
{
	char *s1 = "I am a ";
	string39 str1(s1);
	str1.showstr();
	char *s2 = "student.";
	str1.concat(s2);
	str1.showstr();
	cout << endl << str1.strlength() << endl;
}

//练习3-10
class box
{
public:
	box(double a,double b, double c);
	void vol();
	~box();

private:
	double l, w, h;
	double volume;
};

box::box(double a, double b,double c)
{
	l = a;
	w = b;
	h = c;
	volume = l*w*h;
}

box::~box()
{
}

void box::vol()
{
	cout << "volume is:" << volume << endl;
}

void boxTest()
{
	box x(2.2, 3.97, 8.09), y(1.0, 2.0, 3.0);
	x.vol();
	y.vol();
}

int main()
{
	scoreTest();
	string39Test();
	boxTest();
	system("pause");
	return 0;
}