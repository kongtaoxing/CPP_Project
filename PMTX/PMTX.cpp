#include"CCircle.h"
#include"CRectangle.h"
#include"CSquare.h"
#include"CTriangle.h"
int main() {
	int r, a1, a2, b2, x, y, x1, y1, x2, y2, x3, y3;
	cout << "Please input the coordinate of the point: ";
	cin >> x >> y;
	CPoint P(x, y);
	CFigure F(P);
	cout << "The area of the figure:\n";
	F.area();
	cout << "The perimeter of the figure:\n";
	F.perimeter();
	cout << "\nPlease input the radius of the circle: ";
	cin >> r;
	CCircle C(r, P);
	cout << "The center of the circle is "; P.ShowValue();
	cout << "The radius of the circle is " << r << endl;
	cout << "The perimeter of the circle is " << C.perimeter() << endl;
	cout << "The area of the circle is " << C.area() << endl;
	cout << "Please input the length of the square: ";
	cin >> a1;
	CSquare S(a1, P);
	cout << "\nThe length of the square is " << a1 << endl;
	cout << "The point of the square is "; P.ShowValue();
	cout << "The perimeter of the square is " << S.perimeter() << endl;
	cout << "The area of the square is " << S.area() << endl;
	cout << "Please input the length of the ractangle: ";
	cin >> a2 >> b2;
	CRectangle R(a2, b2, P);
	cout << "The perimeter of the rectangle is " << R.perimeter() << endl;
	cout << "The area of the rectangle is " << R.area() << endl;
	cout << "Please input the three point of the triangle: ";
	cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3;
	CTriangle T(CPoint(x1, y1), CPoint(x2, y2), CPoint(x3, y3));
	cout << "The perimeter of the triangle is " << T.perimeter() << endl;
	cout << "The area of the triangle is " << T.area() << endl;
	return 0;
}
