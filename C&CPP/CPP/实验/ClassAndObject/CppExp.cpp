#include <iostream>
#include "Image.h"

int main(int argc, char* argv[])
{
# if 0
	Image img; //创建对象
	img.Read("Fruits.jpg");
	//img.Write("FruitsCopy.jpg");

	cvNamedWindow("Image", CV_WINDOW_AUTOSIZE);
	img.Show("Image");
	cvWaitKey(0); //等待按键

	//write your code here
	//实现图像的左右翻转,如img.Flip(true);并显示

	//实现图像的上下翻转,显示

	//实现图像的缩放,显示

	//获取图像的某点的像素值,并修改

	//使用拷贝构造函数创建新的对象
	Image new_img(img);
	//截取指定区域内的图像,并显示

	//旋转图像并显示（简单起见，旋转角度为90度的整数倍）

	//求图像的均值和方差，并在命令行输出

	//交换两个图像的数据
	Image img1("Baboon.jpg");
	Image img2("Lena.jpg");
	img1.Show("Image1");
	img2.Show("Image2");
	cvWaitKey(0); //等待按键

	Swap(mg1, img2);
	img1.Show("Image1");
	img2.Show("Image2");
	cvWaitKey(0); //等待按键
#endif

	system("pause");
	return 0;
}
