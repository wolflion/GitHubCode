#include <iostream>
#include "Image.h"

int main(int argc, char* argv[])
{
# if 0
	Image img; //��������
	img.Read("Fruits.jpg");
	//img.Write("FruitsCopy.jpg");

	cvNamedWindow("Image", CV_WINDOW_AUTOSIZE);
	img.Show("Image");
	cvWaitKey(0); //�ȴ�����

	//write your code here
	//ʵ��ͼ������ҷ�ת,��img.Flip(true);����ʾ

	//ʵ��ͼ������·�ת,��ʾ

	//ʵ��ͼ�������,��ʾ

	//��ȡͼ���ĳ�������ֵ,���޸�

	//ʹ�ÿ������캯�������µĶ���
	Image new_img(img);
	//��ȡָ�������ڵ�ͼ��,����ʾ

	//��תͼ����ʾ�����������ת�Ƕ�Ϊ90�ȵ���������

	//��ͼ��ľ�ֵ�ͷ���������������

	//��������ͼ�������
	Image img1("Baboon.jpg");
	Image img2("Lena.jpg");
	img1.Show("Image1");
	img2.Show("Image2");
	cvWaitKey(0); //�ȴ�����

	Swap(mg1, img2);
	img1.Show("Image1");
	img2.Show("Image2");
	cvWaitKey(0); //�ȴ�����
#endif

	system("pause");
	return 0;
}
