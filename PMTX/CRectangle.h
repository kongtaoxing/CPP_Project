#pragma once
#include"CFigure.h"
class CRectangle :public CFigure {
	int a, b;
	CPoint dot;
public:
	CRectangle();
	CRectangle(int, int, CPoint);
	void Set_Value(int, int, CPoint);
	void Show_Point();
	double perimeter();
	double area();
	~CRectangle();
};
inline CRectangle::CRectangle() {}
inline CRectangle::CRectangle(int a1, int b1, CPoint d) :a(a1), b(b1), dot(d) {}
inline CRectangle::~CRectangle() {}