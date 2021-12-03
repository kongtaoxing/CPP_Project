#include<iostream>
#include"CRational.h"
using namespace std;

int gcd(int a, int b)
{
	return a == 0 ? b : gcd(b % a, a);
}

void CRational::SetValue(int n, int d) {
	numerator = n; denominator = d;
}
void CRational::ShowValue() {
	cout << numerator / gcd(numerator, denominator) << '/' << denominator / gcd(numerator, denominator) << endl;
}
CRational CRational::operator+(const CRational& zR)const {
	return CRational(numerator * zR.denominator + denominator * zR.numerator, denominator * zR.denominator);
}
CRational CRational::operator-(const CRational& zR)const {
	return CRational(numerator * zR.denominator - denominator * zR.numerator, denominator * zR.denominator);
}
CRational CRational::operator*(const CRational& zR)const {
	return CRational(numerator * zR.numerator, denominator * zR.denominator);
}
CRational CRational::operator/(const CRational& zR)const {
	if (zR.numerator == 0) {
		cout << "被除数不能为负数！" << endl;
		return CRational(0, 0);
	}
	else return CRational(numerator * zR.denominator, denominator * zR.numerator);
}