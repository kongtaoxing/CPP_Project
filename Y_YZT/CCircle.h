#pragma once
#include<iostream>
using namespace std;
class CCircle {
	int mr;
public:
	CCircle();
	CCircle(int);
	~CCircle();
	void Set_R(int zr);
	void Show_R();
	double area();
};

inline CCircle::CCircle() {}
inline CCircle::CCircle(int zr) :mr(zr) {}
inline CCircle::~CCircle() {}