// 20170829
#include <iostream>
using namespace std;

//��3.19 ���һ��Rect�࣬�����г�Ա���� ��1��Move():��һ��λ���Ƶ���һ��λ��
//��2��Size():�ı���εĴ�С ��3��Where()�����ؾ������Ͻǵ�����ֵ ��4��Area(): ����������

// Where()���ؾ������Ͻǵ�����ֵ�����������������Բ����������͡�

class Rect
{
public:
	Rect(int x1, int y1, int w1, int h1)
	{
		x = x1;
		y = y1;
		w = w1;
		h = h1;
	}
	~Rect();
	void Move(int x1, int y1)
	{
		x = x1;
		y = y1;
	}

	void Size(int w1, int h1)
	{
		w = w1;
		h = h1;
	}

	void Where(int &x1, int &y1)
	{
		x1 = x;
		y1 = y;
	}

	int Area()
	{
		return w*h;
	}

private:
	int x, y; // ���Ͻ�����
	int w, h; // ��Ⱥ͸߶�
};

Rect::~Rect()
{
}

int main()
{
	Rect r(2, 3, 20, 10);
	int x, y;
	cout << "���������" << r.Area() << endl;
	cout << "�ƶ���(5,4)" << endl;
	r.Move(5,4);
	cout << "�ı��Ϊ6����Ϊ3"<<endl;
	r.Size(6,3);
	r.Where(x,y);
	cout<<"���Ͻǣ���"<< x << "," << y <<"��"<<endl;
	cout << "���������" << r.Area() << endl;
	system("pause");
	return 0;
}