#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	double a ; 
	cout << "������a��ֵ" << endl;
	cin >> a; 
	double xn = a;
	double xn1;
	if (a < 0) { cout << "error:����û��ƽ����" << endl; return 0; }
	else if (a == 0) { cout << "0��ƽ����Ϊ0" << endl; return 0; }
	else  do {
		
			xn1 = (xn + (a / xn))/2;
			if (fabs(xn1 - xn) <= 1e-5) { break; }
			else xn = xn1;
		} while (1);
	
			cout << "a��ƽ����Ϊ" <<xn1 << endl;
	}	
	
