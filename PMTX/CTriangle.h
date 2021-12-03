#pragma once
#include"CFigure.h"
class CTriangle :public CFigure {
	CPoint dot1, dot2, dot3;
public:
	CTriangle();
	CTriangle(CPoint, CPoint, CPoint);
	void Set_Value(CPoint, CPoint , CPoint);
	void Show_Point();
	double perimeter();
	double area();
	~CTriangle();
};
inline CTriangle::CTriangle() {}
inline CTriangle::CTriangle(CPoint d1, CPoint d2, CPoint d3) {
	dot1 = d1;
	dot2 = d2;
	dot3 = d3;
	double l1 = dot1.Distance(dot2), l2 = dot2.Distance(dot3), l3 = dot1.Distance(dot3);
	if (!(l1 + l2 > l3 && l1 + l3 > l2 && l2 + l3 > l1))
		cout << "This Triangle does not exist. The data is false." << endl;
	else;
}
inline CTriangle::~CTriangle() {}