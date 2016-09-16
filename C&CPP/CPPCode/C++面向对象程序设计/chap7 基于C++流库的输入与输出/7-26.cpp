/*
 * 将char类型的数组写入一个文件，然后又将它们读回，并且报告读出的字符数量
 */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// 创建一个文件
	ofstream out("test");
	if(!out)
	{
		cout << "Cannot open output file.\n";
		exit(1);
		//return 1;  // 是不是也可以?
	}

	char carry[4] = {'a','b','c','d'};
	out.write((char *)carry,sizeof(carry)); // 写数据的使用格式
	out.close();

	// 创建一个输入文件
	ifstream in("test");
	if(!in)
	{
		cout << "Cannot open input file.\n";
		//exit(1);
		return 1;
	}
	in.read((char*)&carry,sizeof(carry));
	int i;
	for (i=0;i<4;i++)
	{
		cout << carry[i]<<' ';
	}
	cout << '\n';
	cout <<in.gcount() << "characters read\n";
	in.close();

	system("pause");

	return 0;
}