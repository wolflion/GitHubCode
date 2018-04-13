#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main()
{
	string s("The zip code of Hondelage in Germany is 38108.");
	cout << "Original: " << s << endl;
	string sd(s.begin(),s.end());
	cout << "Destination: "<<sd<<endl;
	transform(sd.begin(),sd.end(),sd.begin(),toupper); // 算法中使用迭代器
	cout <<
	return 0;
}