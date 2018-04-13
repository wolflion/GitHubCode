#include <iostream>
#include <string>
#include <vector>
using namespace std;
const int NUM = 5;

int main()
{
	vector<string>names(NUM);  // 定义矢量变量
	vector<int>sexs(NUM);

	cout <<"Please Do Exactly As Told. You Will enter\n"  << NUM << "Personal Name and Their Sex.\n";
	int i = 0;
	for(i=0;i<NUM;i++)
	{
		cout << "Enter title # " << i+1 <<": ";
		getline(cin,names[i]);  // 获取输入信息
		cout << "Enter sex(0/1) # ";
		cin >> sexs[i];
		cin.get(); // 等待
	}
	cout << "Thank you. You entered the following: \n" << "name/sex"<<endl;
	for(i=0;i<NUM;i++)
	{
		cout <<names[i]<<"\t"<<sexs[i]<<endl;
	}
	return 0;
}