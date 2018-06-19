#pragma once
#ifndef __PLAYER_H__
#define __PLAYER_H__

#include "cocos2d.h"
#include "Architecture.h"
#include<string>
#include<iostream>
using namespace std;

class Player : public cocos2d::Sprite
{
private:
	Sprite* soldier ;
	Sprite* tank;
	CC_SYNTHESIZE(int, inithp, _inithp);       //��ʼѪ��
	CC_SYNTHESIZE(int, hp, _hp);               //����Ѫ��
	CC_SYNTHESIZE(cocos2d::Vec2, vel, _vel);           //��ʼ�ٶ�
	bool  _isDead = false;                     //����Ƿ�����
	bool _alreadyDead = false;                 //����Ƿ�����������
public:
	Player()
	{

	};

	void initPlayer(int inithp);

    static Player* createWithSpriteFrameName(const char * SpriteFrameName);
	
	void Birthplace(Arch *arch);    //���������ʼλ��

	void setPlayerDead();           //������������
	
	bool isDead();                 //�ж������Ƿ�����
	

    void moveToPosition(cocos2d::Vec2 & position);

    virtual void update(float dt);

};


#endif // !__PLAYER_H__

