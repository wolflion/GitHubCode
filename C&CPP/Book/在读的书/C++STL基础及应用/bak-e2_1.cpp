/*
 * 20160425
 * 例2.1 编制动态数组的模板类
*/

#include <iostream>
template <class T>

using namespace std;

class MyArray{
public:
	MyArray(int nSize = 3) // 数组默认总长度是3
private:
	int m_nTotalSize;
	int m_nValidSize;  // 数组有效长度
	T* m_pData;        // 数据
};




int main(int argc, char* argv[])
{

	system("pause");
	return 0;
}
