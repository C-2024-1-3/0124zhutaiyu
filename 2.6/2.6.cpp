#include<iostream>
using namespace std;
int main() {
	int a, b;
	cout << "��ֱ�������������" << endl;
	cin >> a;
	cin >> b;
	int i = 0;
	if (a > b) { i = b; }
	else { i = a; }
	for (;i>=1; i--) {
		if (a % i == 0 && b % i == 0) { cout << "a,b�����Լ��Ϊ�� " << i << endl; break; }
	}
	int n = 0;
	if (a > b) { n = a; }
	else n = b;
	for (;; n++) {
		if (n % a == 0 && n % b == 0) { cout << "a,b����С������Ϊ�� " << n << endl; break; }
	}
	
	
}