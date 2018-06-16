#ifndef __ARCHITECTURE_H__
#define __ARCHITECTURE_H__

#include"cocos2d.h"
#include<string>
#include<iostream>
using namespace std;
#define _basement "basement.png"
#define _powerplant "powerplant.png"
#define _minefield "minefield,png"
#define _barracks "barracks.png"
#define _warfactory "warfactory.png"

class Arch :public cocos2d::Sprite
{
private:
	CC_SYNTHESIZE(int, inithp, _inithp);       //��ʼѪ��
	CC_SYNTHESIZE(int, hp, _hp);               //����Ѫ��
	bool  _isDead = false;                     //�����Ƿ�ը
	bool _alreadyDead = false;                 //�����Ƿ������ı�ը
public:
	typedef enum
	{
		Basement,
		Powerplant,
		Minefield,
		Barracks,
		Warfactory,
	}ArchTypes;
	Arch();
	Arch(int inithp)
	{
		this->inithp = 100;
	}
	static Arch* createWithArchTypes(ArchTypes archtypes)
	{
		Arch *sprite = new Arch(archtypes);
		const char* ArchFrameName = _basement;
		switch (archtypes)
		{
		case Basement:
			ArchFrameName = _basement;
			sprite->inithp = 100;
			break;
		case Powerplant:
			ArchFrameName = _powerplant;
			sprite->inithp = 100;
			break; 
		case Minefield:
			ArchFrameName = _minefield;
			sprite->inithp = 100;
			break;
		case Barracks:
			ArchFrameName = _barracks;
			sprite->inithp = 100;
			break;
		case Warfactory:
			ArchFrameName = _warfactory;
			sprite->inithp = 100;
			break;
		};

		if (sprite && sprite->initWithSpriteFrameName(ArchFrameName))
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