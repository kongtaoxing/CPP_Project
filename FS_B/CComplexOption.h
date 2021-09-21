#pragma once
#include<iostream>
using namespace std;

class CComplex
{
	double mR, mI;
public:
	CComplex(double zR = 0, double zI = 0); //���캯��
	~CComplex(); //��������
	void SetValue(); //�����������ò������� 1
	void SetValue(double zR, double zI); //�����������ò������� 2
	void ShowValue(); //����������ʾ��������
	CComplex Add(const CComplex& zC) const; //�����ӷ����㹦�ܺ���
	CComplex Substract(const CComplex& zC) const; //�����������㹦�ܺ���
	CComplex Multiply(const CComplex& zC) const; //�����˷����㹦�ܺ���
	CComplex Divide(const CComplex& zC) const; //�����������㹦�ܺ���
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
		cout << "��������Ϊ�㣡" << endl;
		zDiv.mR = 0;
		zDiv.mI = 0;
	}
	else {
		zDiv.mR = (mR * zC.mR + mI * zC.mI) / (zC.mR * zC.mR + zC.mI * zC.mI);
		zDiv.mI = (mI * zC.mR - mR * zC.mI) / (zC.mR * zC.mR + zC.mI * zC.mI);
	}
	return zDiv;
}