//e7_21.cpp
#include<iostream>
#include<queue>
#include<algorithm>
#include<iterator>
using namespace std;

class Student
{
public:
	Student(int NO, string name, int chinese, int math) {
		this->NO = NO;
		this->name = name;
		this->chinese = chinese;
		this->math = math;
	};
	~Student() {};
	int GetNO()const { return NO; }
	string GetName()const { return name; }
	int getChinese()const { return chinese; }
	int getMath()const { return math; }

	bool operator<(const Student& s)const {
		int sum1 = chinese + math;
		int chinese2 = s.getChinese();
		int math2 = s.getMath();
		int sum2 = chinese2 + math2;

		if (sum1 < sum2) return true;
		if ((sum1 == sum2) && (chinese < chinese2))
			return true;
		return false;
	}
private:
	int NO;
	string name;
	int chinese;
	int math;
};


int main()
{
	Student s[] = { Student(1001,"zhang",70,80),Student(1002,"li",80,70),
		Student(1003,"wang",90,85),Student(1004,"zhao",85,75) };
	priority_queue<Student>pr(s, s + 4);
	cout << "成绩由高到低（当相同时，语文高优先）:" << endl;
	cout << "学号\t姓名\t语文\t数学" << endl;
	while (!pr.empty()){
		const Student& t = pr.top(); // 当前成绩最高同学对象
		//cout << t.GetNO() << "\t" << t.GetName() << "\t" << t.getChinese() << "\t" << t.getMath() << endl;  // 这样编译不过，不知道是不是因为name是string类型
		cout << t.GetNO() << "\t" << t.getChinese() << "\t" << t.getMath() << endl;
		pr.pop();
	}
	getchar();
	return 0;
}