#ifndef __ARCHITECTURE_H__
#define __ARCHITECTURE_H__

#include"cocos2d.h"
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
	int kind;
public:

	Arch() { inithp = 100; };
	/*static Arch* create(const std::string& filename)
	{
		Arch *sprite = new Arch();
		if (sprite && sprite->initWithFile(filename))
		{
			sprite->autorelease();
			return sprite;
		}
		CC_SAFE_DELETE(sprite);
		return nullptr;
	}*/
	static Arch* createWithArchTypes(cocos2d::Vec2& Pos, int kind)
	{
		Arch *sprite = new Arch();
		Sprite *basement = Sprite::create("basement.png");
		Sprite *powerplant = Sprite::create("powerplant,png");
        Sprite *minefield = Sprite::create("minefield,png");
        Sprite *barracks = Sprite::create("barracks.png");
        Sprite *warfactory = Sprite::create("warfactory.png");
		const char *ArchFrameName = "basement.png";
		switch (kind)
		{
		case 1:
			basement->setPosition(Pos);
			sprite->inithp = 100;
			break;
		case 2:
			
			powerplant->setPosition(Pos);
			sprite->inithp = 100;
			break;
		case 3:
			
			minefield->setPosition(Pos);
			sprite->inithp = 100;
			break;
		case 4:
			
			barracks->setPosition(Pos);
			sprite->inithp = 100;
			break;
		case 5:
			
			warfactory->setPosition(Pos);
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