#include"CRational.h"
int main() {
	cout << "请输入四个数字作为两个数的分子和分母：";
	int a, b, c, d;
	cin >> a >> b >> c >> d;
	CRational R1(a, b), R2(c, d);
	cout << "\n两个数的和为："; (R1 + R2).ShowValue();
	cout << "\n两个数的差为："; (R1 - R2).ShowValue();
	cout << "\n两个数的积为："; (R1 * R2).ShowValue();
	cout << "\n两个数的商为："; (R1 / R2).ShowValue();
	return 0;
}
