#ifndef BLOCK_H
#define BLOCK_H

#include "vector2D.hpp"
#include "graphics.hpp"
#include "config.hpp"

class Block
{
protected: // TODO! incosistent...
	int w,h, hp;
	double speed; // will be multiplicated with the direction basis vector
	double x,y; // x and y as double, should be only rounded when actually drawn
	Vector2D direction;
	Graphics *g;
public:
	virtual ~Block() {}
	virtual void think(void) = 0; // AI for our zombies and civilists
	virtual void draw(void) = 0; // AI for our zombies and civilists
	double getX() { return x; };
	double getY() { return y; };
	void setX(double x) { this->x = x; };
	void setY(double y) { this->y = y; };
};
#endif