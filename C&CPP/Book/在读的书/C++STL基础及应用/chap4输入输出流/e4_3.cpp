/*
 * 20160426
 * e4_3.cpp get,getline 函数简单示例
 */

 #include<iostream>
 using namespace std;

 int main()
 {
 	char szBuf[20];

    cout << "请输入一个字符串:";
    int n = cin.get(); // 先读一个字符
    cin.getline(szBuf,60); // 接着读一行字符，遇到结束符"\0"停止

 	cout << n << endl;
 	cout << "The received string is:" << szBuf << endl;

 	system("pause");
 	return 0;
 }