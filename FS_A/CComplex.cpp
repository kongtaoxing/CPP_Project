#include<iostream>
#include"CComplex.h"
using namespace std;

int main()
{
	CComplex zC, zSum;
	double R1, R2, I1, I2;
	cout << "请分别输入两个复数的实部和虚部:\n";
	cin >> R1 >> I1 >> R2 >> I2;
	zC.SetValue(R1, I1);
	zSum.SetValue(R2, I2);
	cout << "显示加法运算前的数值：" << endl;
	zC.ShowComplex();
	zSum.ShowComplex();
	cout << "输出加法后的数值：" << endl;
	zSum.Add(zC).ShowComplex();
	return 0;
}
