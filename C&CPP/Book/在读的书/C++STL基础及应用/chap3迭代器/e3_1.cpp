// 为数组容器，链表容器编制共同显示函数
#include <stdio.h>
template<class T>
class MyArray
{
private:
	int m_nTotalSize;//数组总长度
	int m_nValidSize;//数组有效长度
	T* m_pData;//数据
public:
	MyArray(int nSize = 3)//数组默认总长度是3
	{
		m_pData = new T[nSize];
		m_nTotalSize = nSize;
		m_nValidSize = 0;
	}

	void Add(T value)//向m_pData添加数据
	{
		//...
	}
};