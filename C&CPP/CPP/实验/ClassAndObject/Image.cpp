//#include "cv.h"
//#include "highgui.h"
#include "Image.h"

# if 0

//构造函数
Image::Image()
{
	
}
//构造函数重载
Image::Image(int h, int w)
{
	//write your code here
}

// 其他重载构造函数的实现
// ......

//拷贝构造函数
Image::Image(const Image &im)
{
	//write your code here
}

//析构函数
Image::~Image()
{
	//write your code here
}

//从硬盘读入图像文件; 
void Image::Read(char* ImageName)
{
	IplImage* img = cvLoadImage(ImageName, CV_LOAD_IMAGE_GRAYSCALE);
	unsigned char *img_data = (unsigned char *)(img->imageData);
	int widthstep = img->widthStep;

	//将一维指针img_data指向的内存中的值写入成员变量二维指针data所指的内存中
	//write your code here

	cvReleaseImage(&img);
}

//保存图像; 
void Image::Write(char *filename)
{
	IplImage* img = cvCreateImage(cvSize(width, height), IPL_DEPTH_8U, 1);
	unsigned char *img_data = (unsigned char *)(img->imageData);
	int widthstep = img->widthStep;

	//将成员变量二维指针data所指内存中的值写入一维指针img_data所指的内存
	//write your code here

	cvSaveImage(filename, img);
	cvReleaseImage(&img);
}

//显示图像;
void Image::Show(char *winname)
{
	IplImage *img = cvCreateImage(cvSize(width, height), IPL_DEPTH_8U, 1);
	unsigned char *img_data = (unsigned char *)(img->imageData);
	int widthstep = img->widthStep;

	//将data所指内存中的值写入img_data所指的内存
	//write your code here

	cvNamedWindow(winname, CV_WINDOW_AUTOSIZE);//创建窗口
	cvShowImage(winname, img);
	cvWaitKey(0);
	cvReleaseImage(&img); //释放图像;
}

//获取图像中指定点的值
unsigned char& Image::At(int row, int col)
{
	//write your code here
}
//设置图像为同一值
void Image::Set(unsigned char value)
{
	//write your code here
}

//false 左右，true 上下;
void Image::Flip(int code) 
{
	//write your code here
}
//图像缩小，放大
void Image::Resize(int code)
{
	//write your code here
}

//图像裁剪的函数
//图像旋转的函数
//write your code here

//实现友元函数，交换两个Image对象的数据
void Swap(Image &a, Image &b)
{
	//
}
#endif