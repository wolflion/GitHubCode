// e7_20.cpp
#include<iostream>
#include<queue>
#include<algorithm>
#include<iterator>
using namespace std;

int main() {
	int a[] = { 1,2,3,4,5,6,7,8,9,10 };
	priority_queue<int>pr(a, a + 9);// ͨ�����캯����a[0]~a[8]�������ȶ���
	//priority_queue<int,less<int>>pr(a, a + 9);  // ������ĵȼ�
	pr.push(a[9]); // ͨ������������a[9]�������ȶ���

	cout << "����˳��";
	copy(a, a + 10, ostream_iterator<int>(cout, "\t"));
	cout << endl;

	cout << "����˳��";
	while (!pr.empty()){
		cout << pr.top() << "\t"; // ������ȶ��ж�ͷԪ��
		pr.pop();  // ɾ����ͷԪ��
	}
	getchar();
	return 0;
}