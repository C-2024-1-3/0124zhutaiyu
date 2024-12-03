#include<iostream>
using namespace std;
int main() {
	int an = 1;
	for (int i = 0; i < 10; i++)
	{
		an = (an + 1) * 2;

	}
	cout << "猴子共摘了" << an << "个桃子" << endl;
}