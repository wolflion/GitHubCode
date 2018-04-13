/*
 * 20160426
 * e4_11.cpp 下面示例先写文件，然后再把文件内容读出显示在屏幕上
 */

 #include<iostream>
 #include<fstream>
 using namespace std;

 int main()
 {
 	fstream in_out;
 	in_out.open("d:\\my.txt",ios::in|ios::out|ios::trunc);
 	in_out.write("Hello",5);

 	// 读指针移到文件头
 	in_out.seekg(0,ios::beg);
 	cout << in_out.rdbuf();
 	in_out.close();
 	system("pause");
 	return 0;
 }