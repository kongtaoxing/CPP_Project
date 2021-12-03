#pragma once
#include<iostream>
using namespace std;
class CRational {
	int numerator;
	int denominator;
public:
	CRational(int, int);
	~CRational();
	void SetValue(int n, int d);
	void ShowValue();
	CRational& operator=(const CRational&);
	CRational operator+(const CRational&)const;
	CRational operator-(const CRational&)const;
	CRational operator*(const CRational&)const;
	CRational operator/(const CRational&)const;
};
inline CRational::CRational(int n, int d) :numerator(n), denominator(d) {
	if (d == 0)cout << "分母不能为负数！" << endl;
}
inline CRational::~CRational() {}