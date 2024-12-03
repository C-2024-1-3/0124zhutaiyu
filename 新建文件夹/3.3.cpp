#include<iostream>
using namespace std;
#include"mytemperature.h"

int main()
{
	double i;
	cin >> i;
	cout << "转化为华氏度为" << celsius_to_fah(i) << endl;
	cout << "转化为摄氏度为" << fahrenheit_to_cels(i) << endl;
	
	
}