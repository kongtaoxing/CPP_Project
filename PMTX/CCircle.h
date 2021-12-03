#pragma once
#include"CFigure.h"
class CCircle :public CFigure {
	int mR;
	CPoint dot;
public:
	CCircle(int, CPoint);
	CCircle();
	void Set_Value(int,CPoint);
	void Show_Point();
	double area();
	double perimeter();
	~CCircle();
};
inline CCircle::CCircle(int zR, CPoint d) :mR(zR), dot(d) {}
inline CCircle::CCircle() {}
inline CCircle::~CCircle() {}