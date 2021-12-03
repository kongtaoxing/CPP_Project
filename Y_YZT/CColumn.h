#pragma once
#include"CCircle.h"
class CColumn :public CCircle {
	int mh;
public:
	CColumn();
	CColumn(int);
	~CColumn();
	void Set_H(int);
	void Show_H();
	double volume();
};

inline CColumn::CColumn() {}
inline CColumn::CColumn(int zh) :mh(zh) {}
inline CColumn::~CColumn() {}