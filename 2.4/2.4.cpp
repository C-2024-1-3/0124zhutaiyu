#include<iostream>
using namespace std;
int main()
{
	while (1) {
		double a, b;
		char ch;
		cout << "�������һ����" << endl;
		cin >> a;
		cout << "�����������" << endl;
		cin >> ch;
		cout << "������ڶ�����" << endl;
		cin >> b;
		double r = 0;
		switch (ch) {
		case '+':r = a + b;
			cout << a << " " << ch << " " << b << " " << "=" << r << endl;
			break;
		case '-':r = a - b; cout << a << " " << ch << " " << b << " " << "=" << r << endl; break;
		case '*':r = a * b; cout << a << " " << ch << " " << b << " " << "=" << r << endl; break;
		case '/':if (b == 0) { cout << "��������Ϊ�㣬����������" << endl; break; }
				else r = a / b; cout << a << " " << ch << " " << b << " " << "=" << r << endl;
			break;
		case '%':if (b == 0) { cout << "��������Ϊ��" << endl; break; }
				else r = static_cast<int>(a) % static_cast<int>(b); cout << a << " " << ch << " " << b << " " << "=" << r << endl;
			break;
		default:cout << "�Ƿ����������������" << endl;
		}
		
	}
}