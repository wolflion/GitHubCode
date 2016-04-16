/*
 * 20160414
 * ����ĸ�ֵ������
 */

#include <iostream>
using namespace std;

class BOX{
public:
	BOX(int=10,int=10,int=10); // ������Ĭ�ϲ����Ĺ��캯��
	int volume();
private:
	int iHeight;
	int iWidth;
	int iLength;
};

BOX::BOX(int h, int w, int l)
{
	iHeight = w;
	iWidth = w;
	iLength = l;
}

int BOX::volume()
{
	return (iHeight * iWidth * iLength);
}

int main()
{
	BOX box1(15,30,25), box2;
	cout << box1.volume() << endl;
	box2 = box1; // ����ĸ�ֵ
	cout << box2.volume() << endl;

	BOX box3(box2); // ����ĸ��Ʒ���һ
	cout << box3.volume() << endl;
	BOX box4 = box3; // ����ĸ��Ʒ�����
	cout << box4.volume() << endl;

	system("pause");
	return 0;
}