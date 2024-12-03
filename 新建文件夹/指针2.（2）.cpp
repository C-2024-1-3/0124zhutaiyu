#include<iostream>
using namespace std;
int parseHex(const char *const hexstring) {
	int len =strlen(hexstring);
	int base = 1;
	int result = 0;
	for (int i = len - 1; i >= 0; i--) {
		if (isdigit(hexstring[i])) {
			result += hexstring[i] - '0';

		}
		else if (isalpha(hexstring[i])) { result += (hexstring[i] - 'A' + 10)*base; }
		base *= 16;
	}

	return result;
}
int main() {
	const char* hexstring="A5";
	int t=parseHex(hexstring);
	cout << "十六进制数" << hexstring << "转化为十进制后为" << t << endl;

}