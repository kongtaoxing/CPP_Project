#pragma once
#include<iostream>
using namespace std;
class CStudent {
private:
	char mNo[9]; //学号
	char* mpName; //姓名
	int mScore[5]; //五门功课成绩
	static int mCount; //学生对象计数
public:
	CStudent(); //构造函数
	CStudent(const CStudent& zS); //拷贝构造函数
	~CStudent(); //析构函数
	void SetStudent(); //学生对象（学号姓名成绩）设置操作函数
	void ShowStudent() const; //学生对象显示操作函数
	void CompareScore(const CStudent& zS) const; //学生成绩比较函数 1
	void CompareScore(const CStudent* pS) const; //学生成绩比较函数 2
};
int CStudent::mCount = 1;
CStudent::CStudent() {
	 sprintf(mNo, "2028%04d", mCount);
	 mCount++;
}
CStudent::CStudent(const CStudent& zS) {
	strcpy(mNo, zS.mNo);
	mpName = new char[strlen(zS.mpName + 1)];
	strcpy(mpName, zS.mpName);
	memcpy(mScore, zS.mScore, 5 * sizeof(int));
}
CStudent::~CStudent() {
	if (mpName != NULL)
		delete[]mpName;
	mpName = NULL;
}
void CStudent::SetStudent() {
	char* zpName;
	zpName = new char[30];
	mpName = new char[strlen(zpName) + 1];
	int zScore[5];
	cin >> zpName;
	for (int i = 0; i < 5; i++)
		cin >> zScore[i];
	memcpy(mScore, zScore, 5 * sizeof(int));
	strcpy(mpName, zpName);
	delete[] zpName;
}
void CStudent::ShowStudent() const {
	cout << "学号：" << mNo << "姓名：" << mpName << "五门课的成绩：";
	for (int i = 0; i < 5; i++)
		cout << mScore[i] << " ";
	cout << endl;
}
void CStudent::CompareScore(const CStudent& zS)const {
	int sum_a = 0, sum_b = 0;
	for (int i = 0; i < 5; i++) {
		sum_a += mScore[i];
		sum_b += zS.mScore[i];
	}
	if (sum_a > sum_b)
		cout << "A 比 B 学习成绩好！" << endl;
	else if (sum_a = sum_b)
		cout << "A 和 B 学习成绩不相上下！" << endl;
	else
		cout << "A 比 B 学习成绩差！" << endl;
}
void CStudent::CompareScore(const CStudent* pS)const {
	int sum_a = 0, sum_b = 0;
	for (int i = 0; i < 5; i++) {
		sum_a += mScore[i];
		sum_b += pS->mScore[i];
	}
	if (sum_a > sum_b)
		cout << "A 比 B 学习成绩好！" << endl;
	else if (sum_a = sum_b)
		cout << "A 和 B 学习成绩不相上下！" << endl;
	else
		cout << "A 比 B 学习成绩差！" << endl;
}