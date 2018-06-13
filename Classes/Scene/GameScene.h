#pragma once
#ifndef __GAMESCENE_H__
#define __GAMESCENE_H__
#include "cocos2d.h"
#include"ui/CocosGUI.h"
USING_NS_CC;
using namespace std;
enum
{
	ITEM_AMOUNT = 0
};
enum
{
	MAP_LAYER_TAG,
	MENU_LAYER_TAG
};
const string itemImageAdress[ITEM_AMOUNT + 1][3]
{
	"hello.png","hello.png","hello.png"
};
/*�������Ϊ��Ϸ��������Ϊ���㣺��ͼ���˵��㣬�ı���*/




class MapLayer :public Layer
{
private:
	TMXTiledMap * _map;
	TMXLayer * _collidable;

	bool _isDrag;			//����Ƿ����϶�
	Vec2 _posBeginDrag;
public:
	bool init();

	bool clickDownToDrag(Event* event);
	void clickMoveToDrag(Event *event);
	void clickUpToDrag(Event *event);

	void onEnter();
	void onExit();
	CREATE_FUNC(MapLayer);
};


/*class MenuLayer :public Menu
{
private:
public:
	bool init();

};*/




class Game:public Scene
{
private:
	MapLayer * _mapLayer;

	//static auto visibleSize = Director::getInstance()->getVisibleSize();
	//static Vec2 origin = Director::getInstance()->getVisibleOrigin();
public:
	virtual bool init();
	void initMapLayer();
	//void initMenu();
	static Game* createScene();
	CREATE_FUNC(Game);


};





#endif	//__GAMESCENE_H__

