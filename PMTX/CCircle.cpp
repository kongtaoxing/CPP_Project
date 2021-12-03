#include"CCircle.h"
double CCircle::area() {
	return 3.141592653589793238462643383279502884197269399 * mR * mR;
}

double CCircle::perimeter() {
	return 3.141592653589793238462643383279502884197269399 * 2 * mR;
}

void CCircle::Set_Value(int zR, CPoint d) {
	mR = zR;
	dot = d;
}

void CCircle::Show_Point() {
	dot.ShowValue();
}