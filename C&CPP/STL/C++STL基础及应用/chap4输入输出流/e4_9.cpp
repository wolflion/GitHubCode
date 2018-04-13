/*
 * 20160426
 * e4_9.cpp 读二进制文件，并把结果显示在屏幕上
 */

 #include<iostream>
 #include<fstream>
 using namespace std;

struct STUDENT
{
	char strName[20];
	int nGrade;
};

 int main()
 {
 	ifstream in;
 	in.open("d:\\a.txt"); // 打开或创建a.txt文本文件
 	if(!in)
 		return 0;

 	STUDENT st1;
 	STUDENT st2;

 	in.read((char*)&st1,sizeof(STUDENT));
 	in.read((char*)&st2,sizeof(STUDENT));
 	
 	cout << st1.strName << "\t" << st1.nGrade << endl;
 	cout << st2.strName << "\t" << st2.nGrade << endl;

 	in.close();
 	system("pause");
 	return 0;
 }