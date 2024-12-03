#include<iostream>
#include<iomanip>
using namespace std;
bool is_prime(int num) {
	int n = 0;
	for (int i = 1; i < num; i++) {
		if (num % i == 0) { n++; }
	}
	if (n == 1) { return true; }
	else
		return false;
}
	



	int main()
	{
		
		int count = 0;
		int num = 2;

		cout << "前200个素数为：" << endl;

		while (count < 200) {
			if (is_prime(num)&&num<=200) {
				cout << num<<'\t';
				count++;
				if (count % 10 == 0) {
					cout << endl;
				}
			}
			num++;
		}
	}
