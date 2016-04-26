/*
 * 20160426
 * e4_10.cpp 打开一个文件并把文件的内容送到标准输出流中
 */

 #include<iostream>
 #include<fstream>
 using namespace std;

 int main()
 {
 	ifstream fin("d:\\my.txt");
 	if(fin != NULL)
 	{
 		// 把文件所有内容输出到屏幕上
 		cout << fin.rdbuf();
 	}
 	fin.close();

 	system("pause");
 	return 0;
 }