#include"CRectangle.h"
void CRectangle::Set_Value(int a1, int b1, CPoint d) {
	a = a1;
	b = b1;
	dot = d;
}

void CRectangle::Show_Point() {
	dot.ShowValue();
}

double CRectangle::perimeter() {
	return 2 * (a + b);
}

double CRectangle::area() {
	return b * a;
}