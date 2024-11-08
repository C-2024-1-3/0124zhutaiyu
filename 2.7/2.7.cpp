#include<iostream>
using namespace std;
int main() {
	char ch = '*';
	int i = 1;
	for (i; i < 6; i++) {
		for (int j = 0; j < i; j++) { cout << ch; }
		cout << endl;
	}
}