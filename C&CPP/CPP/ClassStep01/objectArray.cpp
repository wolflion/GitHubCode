/*
 * 20160424
 * ��9.6 ���������ʹ�÷���
 * created by lionel
 */

#include <iostream>
using namespace std;

class Box{
public:
	// ��Ĭ�ϲ����Ĺ��캯�����ò�����ʼ���б�����ݳ�Ա��ʼ��
	Box(int h=10,int w=12,int len=15):height(h),width(w),length(len)
	{
		//
	}
	int volume();
private:
	int height;
	int width;
	int length;
};

int Box::volume()
{
	return (height*width*length);
}

int main()
{
	// �����������
	Box a[3]={Box(10,12,15),Box(15,18,20),Box(16,20,26)};

	cout << a[0].volume() << endl;
	cout << a[1].volume() << endl;
	cout << a[2].volume() << endl;
	system("pause");
	return 0;
}