/*
 * 20160426
 * e4_2.cpp 标准输入给不同类型变量赋值的不足示例
 */

 #include<iostream>
 using namespace std;

 int main()
 {
 	int i;
 	char str[20];

    cout << "请输入一个整型数及一个字符串:";
 	cin >> i >> str;  // 命令行各参数默认是以空格为界定符的

 	cout << "i=" << i << endl;
 	cout << "str=" << str << endl;

 	system("pause");
 	return 0;
 }