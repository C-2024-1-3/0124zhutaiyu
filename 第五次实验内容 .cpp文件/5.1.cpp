#include<iostream>
using namespace std;
class Time             // ����Time��
{private:	int hour;
	int minute;
	int sec;// ���ݳ�ԱΪ˽�е�

public: 
	void input(Time*t) {
		
		cin >> t->hour;
		cin >> t->minute;
		cin >> t->sec;
	} //�����趨��ʱ�� 
	
	void output(Time*t) {
		
		cout << t->hour << "��" << t->minute << "��" << t->sec << endl;
	}
	

};
int main()
{
	Time t1;
	t1.input(&t1);
	t1.output(&t1);
	return 0;
}