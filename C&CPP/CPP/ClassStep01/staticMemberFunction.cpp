/*
 * 20160414
 * ��Ԫ��Ա����
 */
#include <iostream>
using namespace std;

class STUDENT
{
public:
	STUDENT(int n, int a, float s):num(n),age(a),score(s){} // ���캯�� ������ʼ����
	void total();
	//float average();// ����Ϊ�Ǿ�̬��Ա����ʱ����main�л���֡��Ǿ�̬��Ա�����ķǷ����á�
	static float average(STUDENT stu); // ��̬��Ա����,�����һ���֣������Ƕ����һ���֡�
private:
	int num;
	int age;
	float score;
	static float sum; // ��̬���ݳ�Ա
	static int count;
};

void STUDENT::total()
{
	sum += score;
	count++;
}

float STUDENT::average(STUDENT stu)
{
	cout << stu.score <<endl;// ͨ�����������÷Ǿ�̬���ݳ�Ա  {��̬��Ա�������÷Ǿ�̬���ݳ�Ա�ķ���}
	return(sum/count);
}

float STUDENT::sum = 0;
int STUDENT::count = 0;


int main()
{
	// ����������鲢��ʼ��
	STUDENT stud[3]={
		STUDENT(1001,18,70),
	    STUDENT(1002,19,78),
		STUDENT(1003,20,98)
	};
	int n;
	cout << "please input the number of students:";
	cin >> n;
	for(int i = 0; i < n; i++)
	{
		stud[i].total();
	}
	cout << "the average score of " << n << "Student is " << STUDENT::average( stud[1]) << endl;
	system("pause");
	return 0;
}