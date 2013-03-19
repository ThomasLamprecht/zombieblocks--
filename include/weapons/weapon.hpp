#ifndef WEAPON_H
#define WEAPON_H

#include "../vector2D.hpp"
#include "../graphics.hpp"
#include "../config.hpp"
#include "../block.hpp"

class Weapon
{
	protected:
	uint32_t ammo, range;
	double speed; // will be multiplicated with the direction basis vector	
public:
	virtual ~Weapon() {}
	virtual void shoot(Vector2D direction) = 0; // Shoot method
	virtual int handleDamage(Block *b) = 0; // AI for our zombies and civilists
	virtual void animateFrame(Graphics g) = 0; // AI for our zombies and civilists
};
#endif