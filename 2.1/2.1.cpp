#include<iostream>
using namespace std;
int main()
{
	while
		(1) {
		char ch;
		cin >> ch;
		if (ch >= 'a' && ch <= 'z') {
			ch -= 32;
			cout << ch << endl;
		}
		else {
			int a = 0;
			a=ch;
			cout << a << endl;
		}
	}
}