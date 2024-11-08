#include<iostream>
#include<iomanip>
using namespace std;
int main()
{
	float H;
	cout << "请输入华氏度" << endl;
	cin >> H;
	float S = H * 1.8 + 32;
	cout << "转化为摄氏度后为" <<fixed<<setprecision(2)<< S << endl;


}