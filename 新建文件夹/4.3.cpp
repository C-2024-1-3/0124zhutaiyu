#include<iostream>
using namespace std;
int main()
{
	
	bool situation[100] = {false};
	
	
		
	for (int stu = 1; stu <= 100; ++stu) {
		for (int loc = stu - 1; loc < 100; loc += stu) {
			situation[loc] = !situation[loc];

		}
	}
		for (int i = 0; i < 100; i++) {
			if (situation[i]) {
				cout << i + 1 << ' ';
			}
		}
		cout << endl;
		return 0;
		}
	
	
	
	
	
