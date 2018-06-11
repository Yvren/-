#pragma once
#ifndef __GAMESCENE_H__
#define __GAMESCENE_H__
#include "cocos2d.h"
#include"ui/CocosGUI.h"
USING_NS_CC;
using namespace std;
enum
{
	BUTTON_AMOUNT = 0
};
/*�������Ϊ��Ϸ��������Ϊ���㣺��ͼ���˵��㣬�ı���*/




/*class MapLayer :public Layer
{
private:
	TMXTiledMap * _map;
	TMXLayer * _collidable;
public:
	bool init();
	Vec2 tileCoordFromPosition(Vec2 position);
};


class MenuLayer :public Menu
{
private:
	vector<Button*> constructButton;

};*/




class Game:public Scene
{
private:
	TMXTiledMap * _tileMap;
	TMXLayer * _collidable;
public:
	virtual bool init();
	void initMap();
	void initMenu();
	static Game* createScece();
	CREATE_FUNC(Game);
};





#endif	//__GAMESCENE_H__

