#ifndef CONFIG_H
#define CONFIG_H

#include <stdint.h>
#include <string>
#include <vector> 

using namespace std;

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

	static vector<string> string_v;
	static vector<int> int_v;
	static vector<double> double_v;

public:
	static void init();
	static void init(string path);
	static void init(int difficulty);
	static void save();
	static void save(string path);
	

	static double getDouble(int id);
	static int getInt(int id);
	static string getString(int id);
	
	// At the moment this values are only approx. correct, mostly they are just guessed ;)
	const static int
	PLAYER_WIDTH		=	0, 
	PLAYER_HEIGHT		=	1,
	PLAYER_SPEED		=	2,
	ZOMBIE_WIDTH		=	3,
	ZOMBIE_HEIGHT		=	4,
	ZOMBIE_SPEED		=	5,
	CIVILIAN_WIDTH	=	6,
	CIVILIAN_HEIGHT	=	7,
	CIVILIAN_SPEED	=	8,

// 	Strings
	const static int
	LOG_FILE				=	0;
	
	//static bool init(string path);
	static void resetToDefault(uint8_t difficulty);
};
#endif