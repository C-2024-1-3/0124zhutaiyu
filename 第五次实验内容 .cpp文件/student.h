
#include<cstring>
using namespace std;
class Student              //������
{
public:                   //���ó�Ա����ԭ������
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