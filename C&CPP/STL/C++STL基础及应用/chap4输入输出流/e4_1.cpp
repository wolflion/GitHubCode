/*
 * 20160426
 * e4_1.cpp 标准输入输出流给不同变量赋值
 */

 #include<iostream>
 using namespace std;

 int main()
 {
 	int i;
 	float f;
 	char str[20];

 	cin >> i;
 	cin >> f;
 	cin >> str;

 	cout << "i=" << i << endl;
 	cout << "f=" << f << endl;
 	cout << "str=" << str << endl;

 	system("pause");
 	return 0;
 }