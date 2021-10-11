#include"CStudent.h"
int main() {
	CStudent XS[5];
	for (int i = 0; i < 5; i++)
		XS[i].SetStudent();
	for (int i = 0; i < 5; i++)
		XS[i].ShowStudent();
	return 0;
}
