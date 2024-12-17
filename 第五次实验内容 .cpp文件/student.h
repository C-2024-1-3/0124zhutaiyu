
#include<cstring>
using namespace std;
class Student              //类声明
{
public:                   //公用成员函数原型声明
	void display();
	void set_value(int n,const char m[20],char x) {
		this->num =n;
		this->sex = x;
		strncpy_s(this->name, m,sizeof(this->name)-1);
		this->name[sizeof(this->name) - 1] = '\0';
		
	}
private:
	int num;
	char name[20];
	char sex;
};