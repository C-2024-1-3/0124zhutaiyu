#include<iostream>
using namespace std;
int main()
{
	cout << "������x��ֵ��0<x<10��" << endl;
	while (1) {
		double x = 0, y;
		cin >> x;
		if (x > 0 && x < 1) {
			y = 3 - (2 * x);
			cout << "y��ֵΪ��" << y << endl;
		}
		else if (x < 5 && x >= 1) {
			y = ((2 / (4 * x)) + 1);
			cout << "y��ֵΪ��" << y << endl;
		}
		else if (x >= 5 && x < 10) {
			y = x * x;
			cout << "y��ֵΪ��" << y << endl;
		}
		else cout << "����x��ֵ���ڶ�������" << endl;
	}
}