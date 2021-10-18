#pragma once
#include<math.h>
class CPoint {
	int mX, mY; //�ᡢ������
public:
	CPoint(int zX = 0, int zY = 0); //���캯��
	~CPoint(); //��������
	void SetPoint(int zX, int zY); //���ò�������
	int GetX() const; //��������ȡ��������
	int GetY() const; //��������ȡ��������
	double Distance(const CPoint& zP) const; //��������㺯��
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