#pragma once
#ifndef __GAMESCENE_H__
#define __GAMESCENE_H__
#include "cocos2d.h"
USING_NS_CC;
/*�������Ϊ��Ϸ��������Ϊ���㣺��ͼ���˵��㣬�ı���*/


class Game:public Layer
{
private:
	TMXTiledMap * _tileMap;
	Sprite *player;
public:
	virtual bool init();
	static Scene* createScece();
	CREATE_FUNC(Game);

};





#endif	//__GAMESCENE_H__

