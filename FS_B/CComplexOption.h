#pragma once
#include<iostream>
using namespace std;

class CComplex
{
	double mR, mI;
public:
	CComplex(double zR = 0, double zI = 0); //构造函数
	~CComplex(); //析构函数
	void SetValue(); //复数对象设置操作函数 1
	void SetValue(double zR, double zI); //复数对象设置操作函数 2
	void ShowValue(); //复数对象显示操作函数
	CComplex Add(const CComplex& zC) const; //复数加法运算功能函数
	CComplex Substract(const CComplex& zC) const; //复数减法运算功能函数
	CComplex Multiply(const CComplex& zC) const; //复数乘法运算功能函数
	CComplex Divide(const CComplex& zC) const; //复数除法运算功能函数
};

inline CComplex::CComplex(double zR, double zI)
{
	mI = zI;
	mR = zR;
}
inline CComplex::~CComplex() {}

void CComplex::SetValue(double zR, double zI)
{
	mI = zI;
	mR = zR;
}

void CComplex::ShowValue()
{
	if (mR == 0 && mI != 0)
		cout << mI << "i" << endl;
	else if (mI == 0 && mR != 0)
		cout << mR << endl;
	else if (mI == 0 && mR == 0)
		cout << 0 << endl;
	else if (mI < 0)
		cout << mR << "-" << -mI << "i" << endl;
	else
		cout << mR << "+" << mI << "i" << endl;
}
CComplex CComplex::Add(const CComplex& zC) const
{
	CComplex zSum;
	zSum.mI = mI + zC.mI;
	zSum.mR = mR + zC.mR;
	return zSum;
}

CComplex CComplex::Substract(const CComplex& zC) const
{
	CComplex zSub;
	zSub.mI = mI - zC.mI;
	zSub.mR = mR - zC.mR;
	return zSub;
}
CComplex CComplex::Multiply(const CComplex& zC) const
{
	CComplex zMul;
	zMul.mR = mR * zC.mR - mI * zC.mI;
	zMul.mI = mI * zC.mR + mR * zC.mI;
	return zMul;
}

CComplex CComplex::Divide(const CComplex& zC) const
{
	CComplex zDiv;
	if (zC.mI == 0 && zC.mR == 0) {
		cout << "除数不能为零！" << endl;
		zDiv.mR = 0;
		zDiv.mI = 0;
	}
	else {
		zDiv.mR = (mR * zC.mR + mI * zC.mI) / (zC.mR * zC.mR + zC.mI * zC.mI);
		zDiv.mI = (mI * zC.mR - mR * zC.mI) / (zC.mR * zC.mR + zC.mI * zC.mI);
	}
	return zDiv;
}