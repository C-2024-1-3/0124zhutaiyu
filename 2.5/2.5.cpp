#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main() {
	int a = 0, b = 0, v = 0, d = 0;
	string str;
	cout << "�������ַ���" << endl;
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
	cout << "Ӣ����ĸ�ĸ���Ϊ" << a << endl;
	cout << "���ֵĸ���Ϊ" << b << endl;
	cout << "�ո�ĸ���Ϊ" << v << endl;
	cout << "�����ַ��ĸ���Ϊ" << d << endl;
	system("pause");
	return 0;
}