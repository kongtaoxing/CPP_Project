#pragma once
#include<iostream>
#include<stdlib.h>
using namespace std;
class CParticle
{
private:
	int mX, mY; //横、纵坐标
	int mV; //质点移动速率
public:
	CParticle(int zV = 1); //构造函数
	~CParticle(); //析构函数
	void SetPosition(int zX, int zY); //质点对象位置设置操作函数
	void SetVelocity(int zV); //质点对象速率设置操作函数
	void ShowPosition(); //质点对象位置显示操作函数
	void MoveTrace(); //基于键盘控制的质点对象跟踪操作函数
	void MoveEastward(); //质点对象右移操作函数
	void MoveWestward(); //质点对象左移操作函数
	void MoveNorthward(); //质点对象上移操作函数
	void MoveSouthward(); //质点对象下移操作函数
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