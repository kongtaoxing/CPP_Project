#pragma once
#include"CPoint.h"
#include<iostream>
using namespace std;
class CTriangle {
	CPoint mVertex[3]; //三角形顶点
public:
	CTriangle(const CPoint& zP1 = CPoint(0, 0), const CPoint& zP2 = CPoint(0, 1), const CPoint& zP3 = CPoint(1, 0)); //构造函数
	~CTriangle(); //析构函数
	void SetTriangle(const CPoint& zP1, const CPoint& zP2, const CPoint& zP3); //设置操作函数
	double Area() const; //面积计算函数
};
CTriangle::CTriangle(const CPoint& zP1, const CPoint& zP2, const CPoint& zP3) {
	mVertex[0] = zP1;
	mVertex[1] = zP2;
	mVertex[2] = zP3;
}
CTriangle::~CTriangle() {}
void CTriangle::SetTriangle(const CPoint& zP1, const CPoint& zP2, const CPoint& zP3) {
	int d1 = zP1.Distance(zP2), d2 = zP2.Distance(zP3), d3 = zP1.Distance(zP3);
	if (d1 + d2 > d3 && d1 + d3 > d2 && d2 + d3 > d1) {
		mVertex[0] = zP1;
		mVertex[1] = zP2;
		mVertex[2] = zP3;
	}
	else cout << "The points your put in can't make a triangle, please try again. The area output is the area of the former triangle's." << endl;
}
double CTriangle::Area() const {
	return (mVertex[0].GetX() * mVertex[1].GetY() + mVertex[1].GetX() * mVertex[2].GetY() + mVertex[2].GetX() * mVertex[0].GetY() - mVertex[0].GetX() * mVertex[2].GetY() - mVertex[1].GetX() * mVertex[0].GetY() - mVertex[2].GetX() * mVertex[1].GetY()) / 2.;
}