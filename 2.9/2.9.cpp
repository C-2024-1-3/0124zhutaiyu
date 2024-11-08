#include<iostream>
using namespace std;
#include<cmath>
int main()
{
	int x1 = 2; 
	int xn=2 ; int n = 1,m=0;
	while (xn <= 100) { xn = (pow(2, n)  - 1) * x1;
	n++;
	m++; }
	float sum = (pow(2,(n-2))-1)*x1*0.8;
	float ave = sum / (m-1);
	

	cout << "每天平均花 ：" <<ave << endl;
	

}