//�ַ���������������ʽ
#include <string>
using namespace std;

int main(int argc, char* argv[])
{
	string s1 = "How are you?";
	string s2(s1.begin(),s1.end());
	// ��string�����ַ�����������
	string s3(s1.begin()+4,s1.begin()+7);//������
	return 0;
}