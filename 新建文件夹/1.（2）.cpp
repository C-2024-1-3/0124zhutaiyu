#include<iostream>
using namespace std;

int main()   //C语言程序，要了解
{
    int a[] = { 1,2,3 };
    int* p, i;
    p = a;    //将数组a首地址送给p
    
        for (int j = 0; j < 3; j++) {
            cout << a[j] << p[j] << *(p + j) << *(a + j) << endl;

        }  //与cout功能差不多
   
}