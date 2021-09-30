#include"CStudent.h"
int main() {
	CStudent A, B, * C;
	A.SetStudent();
	B.SetStudent();
	A.ShowStudent();
	A.CompareScore(&B);
	C = &B;
	A.CompareScore(B);
	return 0;
}
