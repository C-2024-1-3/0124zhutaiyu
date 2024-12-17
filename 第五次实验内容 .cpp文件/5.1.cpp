#include<iostream>
using namespace std;
class Time             // 定义Time类
{private:	int hour;
	int minute;
	int sec;// 数据成员为私有的

public: 
	void input(Time*t) {
		
		cin >> t->hour;
		cin >> t->minute;
		cin >> t->sec;
	} //输入设定的时间 
	
	void output(Time*t) {
		
		cout << t->hour << "：" << t->minute << "：" << t->sec << endl;
	}
	

};
int main()
{
	Time t1;
	t1.input(&t1);
	t1.output(&t1);
	return 0;
}