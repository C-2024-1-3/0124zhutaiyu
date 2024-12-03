#include<iostream>
using namespace std;
#include<cstring>
int indexOf(const char* s1, const char* s2) {
    
    int len1 = strlen(s1);
    int len2 = strlen(s2);

    for (int i = 0; i <= len2 - len1; i++) {
        int j;
        for (j = 0; j < len1; j++) {
            if (s2[i + j] != s1[j]) {
                break;
            }
        }
        if (j == len1) {
            return i + 1;
        }
    }

    return -1;


}
int main() {
    char* s1 = new char[80]; char* s2 = new char[80];
    cout << "Enter the first string: ";
    cin.getline(s1, 80);
    cout << "Enter the second string: ";
    cin.getline(s2, 80);



    cout << "indexOf(s1,s2)is " << indexOf(s1, s2) << endl;
    return 0;
}