//#include "cv.h"
//#include "highgui.h"
#include "Image.h"

# if 0

//���캯��
Image::Image()
{
	
}
//���캯������
Image::Image(int h, int w)
{
	//write your code here
}

// �������ع��캯����ʵ��
// ......

//�������캯��
Image::Image(const Image &im)
{
	//write your code here
}

//��������
Image::~Image()
{
	//write your code here
}

//��Ӳ�̶���ͼ���ļ�; 
void Image::Read(char* ImageName)
{
	IplImage* img = cvLoadImage(ImageName, CV_LOAD_IMAGE_GRAYSCALE);
	unsigned char *img_data = (unsigned char *)(img->imageData);
	int widthstep = img->widthStep;

	//��һάָ��img_dataָ����ڴ��е�ֵд���Ա������άָ��data��ָ���ڴ���
	//write your code here

	cvReleaseImage(&img);
}

//����ͼ��; 
void Image::Write(char *filename)
{
	IplImage* img = cvCreateImage(cvSize(width, height), IPL_DEPTH_8U, 1);
	unsigned char *img_data = (unsigned char *)(img->imageData);
	int widthstep = img->widthStep;

	//����Ա������άָ��data��ָ�ڴ��е�ֵд��һάָ��img_data��ָ���ڴ�
	//write your code here

	cvSaveImage(filename, img);
	cvReleaseImage(&img);
}

//��ʾͼ��;
void Image::Show(char *winname)
{
	IplImage *img = cvCreateImage(cvSize(width, height), IPL_DEPTH_8U, 1);
	unsigned char *img_data = (unsigned char *)(img->imageData);
	int widthstep = img->widthStep;

	//��data��ָ�ڴ��е�ֵд��img_data��ָ���ڴ�
	//write your code here

	cvNamedWindow(winname, CV_WINDOW_AUTOSIZE);//��������
	cvShowImage(winname, img);
	cvWaitKey(0);
	cvReleaseImage(&img); //�ͷ�ͼ��;
}

//��ȡͼ����ָ�����ֵ
unsigned char& Image::At(int row, int col)
{
	//write your code here
}
//����ͼ��Ϊͬһֵ
void Image::Set(unsigned char value)
{
	//write your code here
}

//false ���ң�true ����;
void Image::Flip(int code) 
{
	//write your code here
}
//ͼ����С���Ŵ�
void Image::Resize(int code)
{
	//write your code here
}

//ͼ��ü��ĺ���
//ͼ����ת�ĺ���
//write your code here

//ʵ����Ԫ��������������Image���������
void Swap(Image &a, Image &b)
{
	//
}
#endif