// Ϊ���������������������ƹ�ͬ��ʾ����
#include <stdio.h>
template<class T>
class MyArray
{
private:
	int m_nTotalSize;//�����ܳ���
	int m_nValidSize;//������Ч����
	T* m_pData;//����
public:
	MyArray(int nSize = 3)//����Ĭ���ܳ�����3
	{
		m_pData = new T[nSize];
		m_nTotalSize = nSize;
		m_nValidSize = 0;
	}

	void Add(T value)//��m_pData�������
	{
		//...
	}
};