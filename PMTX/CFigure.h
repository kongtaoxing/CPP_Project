#pragma once
#include"CPoint.h"
class CFigure {
	CPoint dot;
public:
	CFigure();
	CFigure(CPoint);
	~CFigure();
	void Set_Point(CPoint);
	virtual void Show_Point();
	virtual double area();
	virtual double perimeter();
};

inline CFigure::CFigure(CPoint d) :dot(d) {}
inline CFigure::CFigure() {}
inline CFigure::~CFigure() {}