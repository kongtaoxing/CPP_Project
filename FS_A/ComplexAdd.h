#pragma once
using namespace std;

class CComplex
{
	double mR, mI;
public:
	void SetValue(double zR, double zI);
	void ShowComplex();
	CComplex Add(CComplex zC);
};

void CComplex::SetValue(double zR, double zI)
{
	mR = zR;
	mI = zI;
}

void CComplex::ShowComplex()
{
	cout << mR << "+" << mI << "i" << endl;
}

CComplex CComplex::Add(CComplex zC)
{
	CComplex zSum;
	zSum.mR = zC.mR + mR;
	zSum.mI = zC.mI + mI;
	return zSum;
}