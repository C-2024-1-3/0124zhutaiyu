#include<iostream>
using namespace std;

int main()   //C���Գ���Ҫ�˽�
{
    int a[] = { 1,2,3 };
    int* p, i;
    p = a;    //������a�׵�ַ�͸�p
    
        for (int j = 0; j < 3; j++) {
            cout << a[j] << p[j] << *(p + j) << *(a + j) << endl;

        }  //��cout���ܲ��
   
}