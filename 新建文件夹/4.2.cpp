#include<iostream>
using namespace std;
void sort(double array[], int size) {
	bool changed = true;
do {
	
	changed = false;
		for (int i = 0; i < size-1; i++) {
			
			if (array[i] > array[i + 1]) {
				int temp;
				temp = array[i];
				array[i] = array[i + 1];
				array[i + 1] = temp;
				changed = true;
			}
			
		}
		
	} while (changed);
	

}
int main() {
	double array[10];
	cout << "������ʮ��˫���ȵ����� ";
	for (int i = 0; i < 10; i++) {
		cin >> array[i];
	}
	sort(array,10);
	
	cout << "���к������Ϊ��" << endl;
	for (int j = 0; j < 10; j++) {
		cout << array[j] << ' ';
	}
	return 0;
}