#include"CPoint.h"
void CPoint::SetValue(int zX, int zY) {
	mX = zX; mY = zY;
}

void CPoint::ShowValue() {
	cout << "(" << mX << ',' << mY << ')' << endl;
}

double CPoint::Distance(CPoint zP) {
	return sqrt((mX - zP.mX) * (mX - zP.mX) + (mY - zP.mY) * (mY - zP.mY));;
}
