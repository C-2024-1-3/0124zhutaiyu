#include<iostream>
using namespace std;
int main() {
	cout << "Enter ten numers" << endl;
	int array[10];
	int count = 0;
	for (int i = 0; i < 10; i++) {
		int temp;
		cin >> temp;
		bool found = false;
		for (int j = 0; j < count; j++) {
			if (array[j] == temp) { found = true; }
		}
		if (!found) {
			array[count++] = temp;
		}
	}
	cout << "The disdinct numers are: ";
	for (int k = 0; k < count; k++) {
		cout << array[k]<<'\t';
	}

}