#pragma once
#ifndef __PLAYER_H__
#define __PLAYER_H__

#include"cocos2d.h"
#include"Nation.h"
#include<string>
#include<iostream>
using namespace std;
using namespace cocos2d;
/*Player�࣬�̳���Node����¼�������*/

class Player :public cocos2d::Node
{
private:
	string _playerName;			//�������
	Nation* _nation;
public:
	bool init(string &name)
	static Player* create(string &name);

	void setPlayerName(string &name) { _playerName = name; };
	string getPlayerName() { return _playerName; };
	
	void setNation(Nation &nation) { *_nation = nation; };
	Nation* getNationName() { return _nation; };
};


bool Player::init(string &name)
{
	if (!Node::init())
	{
		return false;
	}
	this->Player::setPlayerName(name);
	return true;
}


Player* Player::create(string &name)
{
	auto pl = new Player;
	if (pl&&pl->init(name))
	{
		return pl;
	}
	else
	{
		return nullptr;
	}
}






#endif // !__PLAYER_H__

