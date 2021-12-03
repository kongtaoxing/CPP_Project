#pragma once
#include"CFigure.h"
class CSquare :public CFigure {
	int a;
	CPoint dot;
public:
	CSquare();
	CSquare(int, CPoint);
	void Set_Value(int, CPoint);
	void Show_Point();
	double perimeter();
	double area();
	~CSquare();
};
inline CSquare::CSquare() {}
inline CSquare::CSquare(int a1, CPoint d) :a(a1), dot(d) {}
inline CSquare::~CSquare() {}