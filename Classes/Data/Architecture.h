#ifndef __ARCHITECTURE_H__
#define __ARCHITECTURE_H__

#include"cocos2d.h"
#include"Nation.h"
#include<string>
#include<iostream>
using namespace std;

class Arch :public cocos2d::Sprite
{
private:
		CC_SYNTHESIZE(int, inithp, _inithp);       //��ʼѪ��
	    CC_SYNTHESIZE(int, hp, _hp);               //����Ѫ��
		bool  _isDead = false;                     //�����Ƿ�ը
		bool _alreadyDead = false;                 //�����Ƿ������ı�ը
public:
	Arch();
	Arch(int inithp)
	{
		this->inithp = 100;
	}
	static Arch* createWithSpriteFrameName(const std::string& filename)
	{
		Arch *sprite = new Arch();
		if (sprite && sprite->initWithSpriteFrameName(filename))
		{
			sprite->autorelease();
			return sprite;
		}
		CC_SAFE_DELETE(sprite);
		return nullptr;
	}
	void setPlayerDead()           //������Ӫ��ը
	{
		_isDead = true;
	}

	bool isDead()                 //�ж�����Ƿ���ı�ը
	{
		return _isDead;
	}

};




















#endif