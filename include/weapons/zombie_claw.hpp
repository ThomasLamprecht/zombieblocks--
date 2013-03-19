#ifndef ZOMBIE_CLAW_H
#define ZOMBIE_CLAW_H

#include "weapon.hpp"

class ZombieClaw: public Weapon
{
	ZombieClaw();
	virtual void shoot(Vector2D direction); // Shoot method
	virtual int handleDamage(Block *b); // AI for our zombies and civilists
	virtual void animateFrame(Graphics g); // AI for our zombies and civilists
};

#endif