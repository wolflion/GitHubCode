/*
 * ��char���͵�����д��һ���ļ���Ȼ���ֽ����Ƕ��أ����ұ���������ַ�����
 */

#include <iostream>
#include <fstream>
using namespace std;

int main()
{
	// ����һ���ļ�
	ofstream out("test");
	if(!out)
	{
		cout << "Cannot open output file.\n";
		exit(1);
		//return 1;  // �ǲ���Ҳ����?
	}

	char carry[4] = {'a','b','c','d'};
	out.write((char *)carry,sizeof(carry)); // д���ݵ�ʹ�ø�ʽ
	out.close();

	// ����һ�������ļ�
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