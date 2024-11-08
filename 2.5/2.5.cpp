#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main() {
	int a = 0, b = 0, v = 0, d = 0;
	string str;
	cout << "请输入字符串" << endl;
	getline(cin, str);
	for (char c : str) {
		if (isalpha(c)) {
			a++;

		}
		else if (isdigit(c)) {
			b++;
		}
		else if (isspace(c)) { v++; }
		else {
			d++;
		}
		
	}
	cout << "英文字母的个数为" << a << endl;
	cout << "数字的个数为" << b << endl;
	cout << "空格的个数为" << v << endl;
	cout << "其他字符的个数为" << d << endl;
	system("pause");
	return 0;
}