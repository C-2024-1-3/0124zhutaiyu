#include<iostream>
using namespace std;
int main()
{
	while (1) {
		double a, b;
		char ch;
		cout << "请输入第一个数" << endl;
		cin >> a;
		cout << "请输入运算符" << endl;
		cin >> ch;
		cout << "请输入第二个数" << endl;
		cin >> b;
		double r = 0;
		switch (ch) {
		case '+':r = a + b;
			cout << a << " " << ch << " " << b << " " << "=" << r << endl;
			break;
		case '-':r = a - b; cout << a << " " << ch << " " << b << " " << "=" << r << endl; break;
		case '*':r = a * b; cout << a << " " << ch << " " << b << " " << "=" << r << endl; break;
		case '/':if (b == 0) { cout << "除数不能为零，请重新输入" << endl; break; }
				else r = a / b; cout << a << " " << ch << " " << b << " " << "=" << r << endl;
			break;
		case '%':if (b == 0) { cout << "除数不能为零" << endl; break; }
				else r = static_cast<int>(a) % static_cast<int>(b); cout << a << " " << ch << " " << b << " " << "=" << r << endl;
			break;
		default:cout << "非法运算符，重新输入" << endl;
		}
		
	}
}