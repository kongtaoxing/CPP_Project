#include"CCircle.h"
double CCircle::area() {
	return 3.1415926 * mr * mr;
}

void CCircle::Set_R(int zr) {
	mr = zr;
}

void CCircle::Show_R() {
	cout << "The radius of the circle is " << mr << '.' << endl;
}