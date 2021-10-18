#pragma once
#include<math.h>
class CPoint {
	int mX, mY; //横、纵坐标
public:
	CPoint(int zX = 0, int zY = 0); //构造函数
	~CPoint(); //析构函数
	void SetPoint(int zX, int zY); //设置操作函数
	int GetX() const; //横坐标提取操作函数
	int GetY() const; //纵坐标提取操作函数
	double Distance(const CPoint& zP) const; //点间距离计算函数
};
CPoint::CPoint(int zX, int zY) :mX(zX), mY(zY) {}
CPoint::~CPoint() {}
void CPoint::SetPoint(int zX, int zY) {
	mX = zX;
	mY = zY;
}
int CPoint::GetX() const {
	return mX;
}
int CPoint::GetY() const {
	return mY;
}
double CPoint::Distance(const CPoint& zP) const {
	return sqrt((mX - zP.mX) * (mX - zP.mX) + (mY - zP.mY) * (mY - zP.mY));
}