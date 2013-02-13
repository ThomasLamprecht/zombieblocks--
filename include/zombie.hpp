#ifndef ZOMBIE_H
#define ZOMBIE_H

#include "block.hpp"

class Zombie: public Block
{
public:
	Zombie();
	virtual void think(); // AI for our zombies and civilists
	virtual void draw(); // AI for our zombies and civilists
};
#endif