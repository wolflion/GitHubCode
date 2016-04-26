/*
 * 20160426
 * e4_6.cpp 读文本文件并显示在屏幕上
 */

 #include<iostream>
 #include<fstream>
 using namespace std;

 int main()
 {
 	char szBuf[80];
 	ifstream in("a.txt"); // 通过构造函数创建文件读入流
 	if(!in)    // 若文件不存在
 		return 0;
 	while(in.getline(szBuf,80)) // 通过getline函数按行读取内容
 	{
 		// 将读入缓冲区内容输出到屏幕上，判断是否正确
 		cout << szBuf << endl;
 	}
 	in.close();
 	system("pause");
 	return 0;
 }