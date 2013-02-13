#ifndef BLOCK_H
#define BLOCK_H

class Block
{
	int w,h;
	double speed; // will be multiplicated with the direction basis vector
	double x,y; // x and y as double, should be only rounded when actually drawn
	Vector2D direction;
	double speed;
	virtual ~Block() {}
	virtual void think() = 0; // AI for our zombies and civilists
	virtual void move(Uint8 *keys) = 0; // move for human players with input
	virtual bool draw() = 0; // AI for our zombies and civilists
};
#endif