#pragma once
#include<iostream>
#include<stdlib.h>
using namespace std;
class CParticle
{
private:
	int mX, mY; //�ᡢ������
	int mV; //�ʵ��ƶ�����
public:
	CParticle(int zV = 1); //���캯��
	~CParticle(); //��������
	void SetPosition(int zX, int zY); //�ʵ����λ�����ò�������
	void SetVelocity(int zV); //�ʵ�����������ò�������
	void ShowPosition(); //�ʵ����λ����ʾ��������
	void MoveTrace(); //���ڼ��̿��Ƶ��ʵ������ٲ�������
	void MoveEastward(); //�ʵ�������Ʋ�������
	void MoveWestward(); //�ʵ�������Ʋ�������
	void MoveNorthward(); //�ʵ�������Ʋ�������
	void MoveSouthward(); //�ʵ�������Ʋ�������
};
inline CParticle::CParticle(int zV) {
	mV = zV;
	mX = rand() % 100;
	mY = rand() % 100;
	cout << "<=[" << mX << ", " << mY << "]" << endl;
}
inline CParticle::~CParticle() {
	cout << "[" << mX << ", " << mY << "]=>" << endl;
}
void CParticle::SetPosition(int zX, int zY) {
	mX = zX; mY = zY;
}
void CParticle::SetVelocity(int zV) {
	mV = zV;
}
void CParticle::ShowPosition() {
	cout << "[" << mX << ", " << mY << "]" << endl;
}
void CParticle::MoveTrace() {
	static char *Move;
	Move = new char;
	cout << "Please input a string only contains \"SXZY\" to continue: ";
	cin >> Move;
	for (int i = 0; i < strlen(Move); i++) {
		switch (Move[i])
		{
		case 'S':MoveNorthward(); break;
		case 'X':MoveSouthward(); break;
		case 'Z':MoveWestward(); break;
		case 'Y':MoveEastward(); break;
		default:;
		}
	}
	ShowPosition();
}
void CParticle::MoveEastward() {
	mX += mV;
}
void CParticle::MoveNorthward() {
	mY += mV;
}
void CParticle::MoveSouthward() {
	mY -= mV;
}
void CParticle::MoveWestward() {
	mX -= mV;
}