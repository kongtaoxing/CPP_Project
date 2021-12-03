#include"CColumn.h"
void CColumn::Set_H(int zh) {
	mh = zh;
}
double CColumn::volume() {
	return area() * mh;
}

void CColumn::Show_H() {
	cout << "The hight of the column is " << mh << '.' << endl;
}