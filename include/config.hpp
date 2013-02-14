#ifndef CONFIG_H
#define CONFIG_H
#include <string.h>
/**
 * @file	include/config.hpp
 * @author	Thomas Lamprecht <tom@gamer-source.org>
 * @version	0.01b
 *
 * @section LICENSE
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License as
 * published by the Free Software Foundation; either version 2 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details at
 * http://www.gnu.org/copyleft/gpl.html
 *
 * @section DESCRIPTION
 *
 * This defines the behavior of the world and their objects.
 * A standard value is hard-coded, but  Config::init("path to cfg file")
 * will dynamical load the desired ones!
 */
class Config
{
private:
	Config();
public:
	// At the moment this values are only approx. correct, mostly they are just guessed ;)
	const static int PLAYER_WIDTH=6, PLAYER_HEIGHT=6;
	const static double PLAYER_SPEED=1;
	const static int ZOMBIE_WIDTH=5, ZOMBIE_HEIGHT=5;
	const static double ZOMBIE_SPEED=1;
	const static int CIVILIAN_WIDTH=5, CIVILIAN_HEIGHT=5;
	const static double CIVILIAN_SPEED=1;

	//static bool init(string path);
	static void resetToDefault(uint8_t difficulty);
};
#endif