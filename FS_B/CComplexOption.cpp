#include<iostream>
#include"CComplexOption.h"
using namespace std;

int main()
{
	CComplex zC1, zC2;
	double r1, r2, i1, i2;
	cout << "请分别输入两个复数的实部和虚部：\n";
	cin >> r1 >> i1 >> r2 >> i2;
	zC1.SetValue(r1, i1);
	zC2.SetValue(r2, i2);
	cout << "接下来将分别输出两个复数的和、差、积、商：\n和：";
	zC1.Add(zC2).ShowValue();
	cout << "差：";
	zC1.Substract(zC2).ShowValue();
	cout << "积：";
	zC1.Multiply(zC2).ShowValue();
	cout << "商：";
	zC1.Divide(zC2).ShowValue();
	return 0;
}
