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
	cout << "请分别输入第一个长方柱的长宽高：" << endl;
	c1.input(&c1);
	int v1 = c1.volume(&c1);
	cout << "请分别输入第二个长方柱的长宽高：" << endl;
	c2.input(&c2);
	int v2 = c2.volume(&c2);
	cout << "请分别输入第三个长方柱的长宽高：" << endl;
	c3.input(&c3);
	int v3 = c1.volume(&c3);
	cout << "这三个长方柱的体积分别为：" << v1 << "，" << v2 << "，" << v3 << endl;

}