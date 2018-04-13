/*
 * 20160322
 * e2_1.cpp 编制动态数组的模板类
 */
#include <stdio.h>
template <class T>
class MyArray
{
private:
	int m_nTotalSize;               //数组总长度
	int m_nValidSize;               //数组有效长度
	T* m_pData;                     //数据

public:
	MyArray(int nSize = 3)          //数组默认总长度是3
	{
		m_pData = new T[nSize];
		m_nTotalSize = nSize;
		m_nValidSize = 0;
	}

	void Add(T value)//向m_pData添加数据
	{
		if(m_nValidSize < m_nTotalSize)
		{
			m_pData[m_nValidSize] = value;//赋值
			m_nValidSize++;//有效长度+1
		}
		else
		{
			int i = 0;
			// 添加前三个元素时m_pData内存空间没有变化，到第四个元素时，实现动态数组的生成
			T* tmpData = new T[m_nTotalSize];//原始数据备份
			for(i=0; i<m_nTotalSize; i++)
			{
				tmpData[i] = m_pData[i];
			}
			delete[]m_pData;//释放原始数据内存空间
			m_nTotalSize *= 2;//原始数据空间重新分配，空间扩大1倍
			m_pData = new T[m_nTotalSize];//传回备份数据

			for(i=0;i<m_nValidSize;i++)
			{
				m_pData[i] = tmpData[i];
			}
			delete []tmpData;
			m_pData[m_nValidSize] = value;//error  我开始写成了m_pData[m_nTotalSize] = value; F5的时候感觉就不对
			m_nValidSize++;
		}
	}

	int GetSize()//返回数组有效长度
	{
		return m_nValidSize;
	}

	T Get(int pos)//返回某一位置元素
	{
		return m_pData[pos];
	}

	virtual ~MyArray()
	{
		if(m_pData != NULL)
		{
			delete []m_pData;
			m_pData = NULL;
		}
	}
};


int main()
{
	// 调用MyArray构造函数，再Add四个元素，完成动态数组元素的显示
	MyArray<int>obj;
	obj.Add(1);
	obj.Add(2);
	obj.Add(3);
	obj.Add(4);
	for(int i=0;i<obj.GetSize();i++)
	{
		printf("%d\n",obj.Get(i));
	}
	return 0;
}
