#include<iostream>
#include<string>
using namespace std;
int main() {
	int n;
	cout << "请输入数组元素个数" << endl;
	cin >> n;
	int* dynamic = new int[n];
	
	cout << "请输入数组元素" << endl;
	for (int i = 0; i < n; i++) {
		cin >> dynamic[i];
	}
	cout << "数组内元素有" << endl;
	for (int j = 0; j < n; j++) {
		cout << *(dynamic + j) << endl;
	}
	delete[]dynamic;

}