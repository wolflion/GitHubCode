/*
 * 20160322
 * e2_1.cpp ���ƶ�̬�����ģ����
 */
#include <stdio.h>
template <class T>
class MyArray
{
private:
	int m_nTotalSize;               //�����ܳ���
	int m_nValidSize;               //������Ч����
	T* m_pData;                     //����

public:
	MyArray(int nSize = 3)          //����Ĭ���ܳ�����3
	{
		m_pData = new T[nSize];
		m_nTotalSize = nSize;
		m_nValidSize = 0;
	}

	void Add(T value)//��m_pData�������
	{
		if(m_nValidSize < m_nTotalSize)
		{
			m_pData[m_nValidSize] = value;//��ֵ
			m_nValidSize++;//��Ч����+1
		}
		else
		{
			int i = 0;
			// ���ǰ����Ԫ��ʱm_pData�ڴ�ռ�û�б仯�������ĸ�Ԫ��ʱ��ʵ�ֶ�̬���������
			T* tmpData = new T[m_nTotalSize];//ԭʼ���ݱ���
			for(i=0; i<m_nTotalSize; i++)
			{
				tmpData[i] = m_pData[i];
			}
			delete[]m_pData;//�ͷ�ԭʼ�����ڴ�ռ�
			m_nTotalSize *= 2;//ԭʼ���ݿռ����·��䣬�ռ�����1��
			m_pData = new T[m_nTotalSize];//���ر�������

			for(i=0;i<m_nValidSize;i++)
			{
				m_pData[i] = tmpData[i];
			}
			delete []tmpData;
			m_pData[m_nValidSize] = value;//error  �ҿ�ʼд����m_pData[m_nTotalSize] = value; F5��ʱ��о��Ͳ���
			m_nValidSize++;
		}
	}

	int GetSize()//����������Ч����
	{
		return m_nValidSize;
	}

	T Get(int pos)//����ĳһλ��Ԫ��
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
	// ����MyArray���캯������Add�ĸ�Ԫ�أ���ɶ�̬����Ԫ�ص���ʾ
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
