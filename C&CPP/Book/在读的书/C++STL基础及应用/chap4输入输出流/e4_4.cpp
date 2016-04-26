/*
 * 20160426
 * e4_4.cpp 判断是否输入整型数
 */

 #include<iostream>
 using namespace std;

 int main()
 {
 	int a;
    cout << "请输入一个数据:";
    cin >> a;
    cout << "状态值为:" << cin.rdstate() << endl;

    if(cin.good())
    {
    	cout << "输入数据的类型正确，无错误！" << endl;
    }

    if(cin.fail())
    {
    	cout << "输入数据的类型错误，非致命错误，可清除输入缓冲区挽回！" << endl;
    }
    
 	system("pause");
 	return 0;
 }