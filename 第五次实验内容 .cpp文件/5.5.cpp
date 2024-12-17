#include<iostream>
using namespace std;
class point {
	
private:
	int X;
	int Y;
public:point(int x, int y) {
		X=x; Y=y;
	}
	void setpoint(int i, int j) {
		X += i;
		Y += j;

	}
	void display() {
		cout << "×ø±êÎª£º" << "£¨" << X << "£¬" << Y << "£©" << endl;
	}
};
int main() {
	point a(60, 80);
	a.setpoint(3, 4);
	a.display();

}