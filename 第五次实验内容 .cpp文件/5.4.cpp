#include<iostream>
#include<string>
using namespace std;
class student {
public:
	string num;
	int grades;

	string max(student stu[],int size) {
		int i = 0;
		for (int j = i + 1; j < size; j++)
		{
			if (stu[i].grades < stu[j].grades) {
				student temp;
				temp = stu[i];
				stu[i] = stu[j];
				stu[j] = temp;
			}
		}
		return stu[i].num;
	}
};
int main() {
	student std;
	student stu[5] = { {"12345",130},{"12344",135},{"12343",127},{"12342",135},{"12341",140} };
	string winner = std.max(stu, 5);
	cout << "最高成绩者的学号为：" << winner << endl;
}


