#include<iostream>
using namespace std;
int function1(int &m, int &n) {
	int t = m < n ? m : n;
	while (1) {
		if (m % t == 0 && n % t == 0) {
			return t;
			
			break;
		}
		else { --t; }

	}
}
int function2(int &m, int &n) {
	int r = m > n ? m : n;
	while (1) {
		if (r % n == 0 && r % m == 0) { return r;  break; }
		else { ++r; }
	}
}
	


	int main(){
	
		int m1, n1;
		cin >> m1;
		cin >> n1;
	int &m2 = m1,  &n2 = n1;
	int t=function1(m1, n1);
int r= function2(m1, n1);
	cout << "这两个数的最大公约数是： " <<t <<"\n" << "这两个数的最小公倍数为： " << r << endl;

	return 0;
}