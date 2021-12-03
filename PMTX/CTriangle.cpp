#include"CTriangle.h"
void CTriangle::Set_Value(CPoint d1, CPoint d2, CPoint d3) {
	dot1 = d1;
	dot2 = d2;
	dot3 = d3;
}

void CTriangle::Show_Point() {
	dot1.ShowValue();
	dot2.ShowValue();
	dot3.ShowValue();
}

double CTriangle::perimeter() {
	double l1 = dot1.Distance(dot2), l2 = dot2.Distance(dot3), l3 = dot1.Distance(dot3);
	return l1 + l2 + l3;
}

double CTriangle::area() {
	double l1 = dot1.Distance(dot2), l2 = dot2.Distance(dot3), l3 = dot1.Distance(dot3);
	double p = this->perimeter() / 2;
	return sqrt(p * (p - l1) * (p - l2) * (p - l3));
}