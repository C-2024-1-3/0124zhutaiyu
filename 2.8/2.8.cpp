#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a ; 
	cout << "请输入a的值" << endl;
	cin >> a; 
	double xn = a;
	double xn1;
	if (a < 0) { cout << "error:负数没有平方根" << endl; return 0; }
	else if (a == 0) { cout << "0的平方根为0" << endl; return 0; }
	else  do {
		
			xn1 = (xn + (a / xn))/2;
			if (fabs(xn1 - xn) <= 1e-5) { break; }
			else xn = xn1;
		} while (1);
	
			cout << "a的平方根为" <<xn1 << endl;
	}	
	
