#include"CTriangle.h"
int main() {
	CPoint zb1, zb2(1), zb3(0, 1);
	CTriangle triangle;
	triangle.SetTriangle(zb1, zb2, zb3);
	cout << triangle.Area() << endl;
	zb1.SetPoint(1, 0);
	zb2.SetPoint(2, 0);
	zb3.SetPoint(3, 0);
	triangle.SetTriangle(zb1, zb2, zb3);
	cout << triangle.Area() << endl;
	return 0;
}
