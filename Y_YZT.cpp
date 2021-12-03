#include"CColumn.h"
int main() {
	int R, H;
	cout << "Please input the radius of circle and the hight of the column:" << endl;
	cin >> R >> H;
	if (R <= 0 || H <= 0) {
		cout << "Please input valid data!" << endl; 
		return 0;
	}
	CColumn col(H);
	col.Set_R(R);
	cout << "The radius of the circle is " << R << endl;
	cout << "The area of the circle is " << col.area() << endl;
	cout << "The hight of the column is " << H << endl;
	cout << "The volume of the column is " << col.volume() << endl;
	return 0;
}
