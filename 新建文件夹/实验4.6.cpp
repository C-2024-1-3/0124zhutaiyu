#include<iostream>
#include<string>
using namespace std;
void count(const char s[], int counts[]) {
	for (int i = 0; i < 26; i++) {
		counts[i] = 0;
	}
	char init = 'a';
	int len = strlen(s);
	for (int j = 0; j < len; j++) {
		if (init <= s[j] && s[j] <= init + 25) { counts[int(s[j] - init)]++; }
		else if ('A' <= s[j] && 'Z' <= s[j]) { counts[int(s[j] + 32 - init)]++; }



	}
	for (int m = 0; m < 26; m++) {
		if (counts[m] > 0) { cout <<static_cast<char>(m + 'a') << ":" <<counts[m]<< "times" << endl; }
	}

}
int main() {
	
	int MAX = 100;
	char* s = new char[100];
	cout << "Enter a string: " << endl;
	
	cin.getline(s, MAX);
	int counts[26] = { 0 };
	count(s, counts);
	delete[]s;

}