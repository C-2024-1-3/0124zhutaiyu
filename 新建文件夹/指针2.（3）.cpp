#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cout << "����������Ԫ�ظ���" << endl;
	cin >> n;
	int* dynamic = new int[n];
	
	cout << "����������Ԫ��" << endl;
	for (int i = 0; i < n; i++) {
		cin >> dynamic[i];
	}
	cout << "������Ԫ����" << endl;
	for (int j = 0; j < n; j++) {
		cout << *(dynamic + j) << endl;
	}
	delete[]dynamic;

}