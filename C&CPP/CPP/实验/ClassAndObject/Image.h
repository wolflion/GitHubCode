#ifndef IMAGE_H
#define IMAGE_H

class Image
{
public:
	Image(); //�޲����Ĺ��캯�����������ж�Ϊ���Image����
	Image(int h, int w); //���캯�����أ�����h�У�w�е�Image����
	Image(int h, int w, unsigned char val); //���캯�����أ�������ͼ������ֵ��Ϊval;
	Image(char* ImageName); //���캯�����أ������ļ�����Ӳ�̼���ͼ���ļ���ΪImage����;
	Image(unsigned char *m, int rows, int cols); //���캯�����أ���һά��̬���鴴��Image����ͼ��������������ɺ���������������;
	Image(unsigned char m[][100], int rows); //���캯�����أ��Ӿ�̬��ά���鴴��Image����ͼ�����������ά����ĵ�һ��ά�ȣ��ɵڶ�������rows����;
	Image(unsigned char **m, int h, int w); //���캯�����أ��Ӷ�̬���飨����ָ�룩����Image����ͼ��������������ɺ���������������;
	Image(const Image &im); //�������캯��;
	~Image(); //��������;

	void Read(char* ImageName); //��Ӳ���ļ��ж���ͼ������;
	void Write(char* filename); //��ͼ�����ݱ���Ϊͼ���ļ�;
	void Show(char* winname); //��ʾͼ��;
	unsigned char& At(int row, int col); //��ȡ��row�е�col�е����ص��ֵ;
	void Set(int row, int col, unsigned char value); //��������(row,col)Ϊĳֵ;
	void SetAll(unsigned char value); //����ͼ����������Ϊͬһֵ;
	void Flip(int code); //ͼ��ķ�ת; ����code��ֵ��0:���ҷ�ת��1:���·�ת;
	void Resize(int code); //ͼ�������;����code��ֵ��0:��Сһ����1:�Ŵ�һ��;
	void Cut(int x1,int y1,int x2,int y2);//�ü���(x1,y1)����(x2,y2)��ͼ��
	void Rotate(int degree);//ͼ����ת�ĺ��������������ת�Ƕ�Ϊ90�ȵ���������
	void Mean_Variance(float &m, float &var);//��ͼ��ľ�ֵ�ͷ�����ò������

	friend void Swap(Image &a, Image &b);//ʹ����Ԫ������������Image���������

private:    
	unsigned char **data;
	int height;
	int width;
};

#endif
