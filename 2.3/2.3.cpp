#include<iostream>
using namespace std;
int main() {
	while (1) {
		int a, b, c;
		cout << "���������������߳�" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a + b > c && a + c > b && b + c > a) {
			if (a == b || a == c || b == c) {
			 
			  cout << "����һ������������" << endl;
			}
			else cout << "�ⲻ��һ������������" << endl;
		}
		
		else cout << "�������߲��ܹ���һ��������" << endl;
	}
}