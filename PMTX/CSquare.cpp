#include"CSquare.h"
void CSquare::Set_Value(int a1, CPoint d) {
	a = a1;
	dot = d;
}

void CSquare::Show_Point() {
	dot.ShowValue();
}

double CSquare::perimeter() {
	return 4 * a;
}

double CSquare::area() {
	return a * a;
}