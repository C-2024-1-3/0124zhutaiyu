#include<iostream>
using namespace std;
class cuboid {
private:
	int len;
	int width;
	int height;
	int V;
public:
	void input(cuboid* c) {
		cin >> c->len;
		cin >> c->width;
		cin >> c->height;
	}
	int volume(cuboid* c) {
		return c->V = c->height * c->len * c->width;

	}
};
int main() {
	
	cuboid c1, c2, c3;
	cout << "��ֱ������һ���������ĳ���ߣ�" << endl;
	c1.input(&c1);
	int v1 = c1.volume(&c1);
	cout << "��ֱ�����ڶ����������ĳ���ߣ�" << endl;
	c2.input(&c2);
	int v2 = c2.volume(&c2);
	cout << "��ֱ�����������������ĳ���ߣ�" << endl;
	c3.input(&c3);
	int v3 = c1.volume(&c3);
	cout << "������������������ֱ�Ϊ��" << v1 << "��" << v2 << "��" << v3 << endl;

}