#include"CFigure.h"
double CFigure::area() {
	cout << "No figure found." << endl;
	return 0;
}

double CFigure::perimeter() {
	cout << "No figure found." << endl;
	return 0;
}

void CFigure::Set_Point(CPoint d) {
	dot = d;
}

void CFigure::Show_Point() {
	dot.ShowValue();
}