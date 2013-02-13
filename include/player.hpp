#ifndef PLAYER_H
#define PLAYER_H

#include "block.hpp"

class Player: public Block
{
public:
	Player();
	virtual void think(); // AI for our zombies and civilists
	virtual void draw(); // AI for our zombies and civilists
};
#endif