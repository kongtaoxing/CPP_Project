#pragma once
#include<iostream>
using namespace std;
class CPoint {
	double mX, mY;
public:
	CPoint(double, double);
	CPoint();
	void SetValue(int, int);
	void ShowValue();
	double Distance(CPoint);
	~CPoint();
};

inline CPoint::CPoint(double zX, double zY) :mX(zX), mY(zY) {}
inline CPoint::CPoint() {}
inline CPoint::~CPoint() {}