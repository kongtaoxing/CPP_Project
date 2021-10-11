#pragma once
#include<iostream>
using namespace std;
class CStudent {
private:
	char mNo[9]; //ѧ��
	char* mpName; //����
	int mScore[5]; //���Ź��γɼ�
	static int mCount; //ѧ���������
public:
	CStudent(); //���캯��
	CStudent(const CStudent& zS); //�������캯��
	~CStudent(); //��������
	void SetStudent(); //ѧ������ѧ�������ɼ������ò�������
	void ShowStudent() const; //ѧ��������ʾ��������
	void CompareScore(const CStudent& zS) const; //ѧ���ɼ��ȽϺ��� 1
	void CompareScore(const CStudent* pS) const; //ѧ���ɼ��ȽϺ��� 2
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
	cout << "ѧ�ţ�" << mNo << "������" << mpName << "���ſεĳɼ���";
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
		cout << "A �� B ѧϰ�ɼ��ã�" << endl;
	else if (sum_a = sum_b)
		cout << "A �� B ѧϰ�ɼ��������£�" << endl;
	else
		cout << "A �� B ѧϰ�ɼ��" << endl;
}
void CStudent::CompareScore(const CStudent* pS)const {
	int sum_a = 0, sum_b = 0;
	for (int i = 0; i < 5; i++) {
		sum_a += mScore[i];
		sum_b += pS->mScore[i];
	}
	if (sum_a > sum_b)
		cout << "A �� B ѧϰ�ɼ��ã�" << endl;
	else if (sum_a = sum_b)
		cout << "A �� B ѧϰ�ɼ��������£�" << endl;
	else
		cout << "A �� B ѧϰ�ɼ��" << endl;
}