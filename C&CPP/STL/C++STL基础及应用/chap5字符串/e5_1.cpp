//string�������C���Ա��������ı�̴���
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	// s1��s4��ͨ�����캯���ķ�ʽ���������ַ�������
	string s1;  //���󱻴���������������ʼֵ
	string s2("How are you?");
	string s3(s2);
	string s4(s2,0,3);//Դ��s2����ƫ����0���ַ���ʼ����ȡ�����ַ��������µ��ַ�������
	
	string s5 = "Fine";//s5�ǵ�һ��ֵ����ֱ�Ӱ�char�����鸳��s5
	string s6 = s2 + "Fine";//�ɽ���ͬ�ĳ�ʼ������Դ�����һ��
	string s6error = "Fine" + s2;//���벻����string����ֵ���Ⱥ��ұߵ�һ�������string���ͣ�������char�����顣
	return 0;
}