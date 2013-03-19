#include "../include/weapons/zombie_claw.hpp"

ZombieClaw::ZombieClaw()
{
	ammo = 0xFFFFFFFF;
	range = 0;
}
void ZombieClaw::shoot(Vector2D direction) // Shoot method
{
	return;
}
int ZombieClaw::handleDamage(Block *b)	// AI for our zombies and civilists
{
	return 20;
}
void ZombieClaw::animateFrame(Graphics g) // AI for our zombies and civilists
{
	return;
}