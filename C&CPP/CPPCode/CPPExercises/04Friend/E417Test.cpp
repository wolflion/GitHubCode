// 20170829

// ������������Complex��ʹ����Ԫ����addʵ�ָ����ӷ���
#include <iostream>
using namespace std;

class Complex
{
public:
	Complex()
	{
	}
	Complex(double a, double b) // ���ι��캯��
	{
		real = a;
		image = b;
	}
	void setdata(double a, double b)  // �������ݳ�Աֵ
	{
		real = a;
		image = b;
	}
	double getReal()  // ��ײ�
	{
		return real;
	}
	double getImage() // ���鲿
	{
		return image;
	}

	void disp()  // ���һ������
	{
		if (image > 0)
			cout << "������" << real << "+" << image << "i" << endl;
		if (image < 0)
			cout << "������" << real << "-" << -image << "i" << endl;
	}
    friend Complex add(Complex, Complex);  // ������Ԫ����
	~Complex()
	{
	}

private:
	double real, image;
};

//Complex Complex::add(Complex c1, Complex c2)
//{
//	Complex c3;
//	c3.real = c1.real + c2.real;
//	c3.image = c1.image + c2.image;
//	return c3;
//}
// ���û��friend�ؼ��֣���ʵ���������һ������ĳ�Ա������һ������ʵ�ֵġ�
Complex add(Complex c1, Complex c2) // ������Ԫ����
{
	Complex c3;
	c3.real = c1.real + c2.real;  // ����Complex���е�˽�г�Ա
	c3.image = c1.image + c2.image;
	return c3;
}

int main()
{
	Complex c1(2, 5), c2, c3;
	c2.setdata(-6, -2);
	c3 = add(c1, c2);
	cout << "����1��"; c1.disp();
	cout << "����2��"; c2.disp();
	cout << "����3��"; c3.disp();
	system("pause");
	return 0;
}