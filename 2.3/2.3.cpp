#include<iostream>
using namespace std;
int main() {
	while (1) {
		int a, b, c;
		cout << "请输入三角形三边长" << endl;
		cin >> a;
		cin >> b;
		cin >> c;
		if (a + b > c && a + c > b && b + c > a) {
			if (a == b || a == c || b == c) {
			 
			  cout << "这是一个等腰三角形" << endl;
			}
			else cout << "这不是一个等腰三角形" << endl;
		}
		
		else cout << "这三条边不能构成一个三角形" << endl;
	}
}