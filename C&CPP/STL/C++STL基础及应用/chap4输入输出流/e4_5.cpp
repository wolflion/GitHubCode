/*
 * 20160426
 * e4_5.cpp 确保输入一个整型数给变量a
 */

 #include<iostream>
 using namespace std;

 int main()
 {
 	int a;
    while(1)
    {
    cin >> a;

    if(cin.fail())
    {
    	cout << "输入有错！请重新输入" << endl;
        cin.clear(); // 清空状态符标识位
        cin.get();   // 清空流缓冲区
    }
    else
    {
        cout << a << endl; // 直接在屏幕上输出数据
        break;
    }
    }
 	system("pause");
 	return 0;
 }