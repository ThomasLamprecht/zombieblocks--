#ifndef BLOCK_H
#define BLOCK_H

#include "vector2D.hpp"
#include "graphics.hpp"
#include "config.hpp"

class Block
{
public: // TODO! incosistent...
	int w,h;
	double speed; // will be multiplicated with the direction basis vector
	double x,y; // x and y as double, should be only rounded when actually drawn
	Vector2D direction;
	virtual ~Block() {}
	virtual void think(void) = 0; // AI for our zombies and civilists
	virtual void draw(void) = 0; // AI for our zombies and civilists
};
#endif