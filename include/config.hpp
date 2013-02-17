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
	Config() {};
	Config(const Config&);             // nicht kopierbar
	Config& operator=(const Config&);// { return *this; }  // nicht zuweisbar

	vector<string> string_v;
	vector<int> int_v;
	vector<double> double_v;

public:
	static Config& instance();
	
	void init();
	void init(string path);
	void init(int difficulty);
	void save();
	void save(string path);
	

	double getDouble(int id);
	int getInt(int id);
	string getString(int id);
	
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
	CIVILIAN_SPEED	=	8;

// 	Strings
	const static int
	LOG_FILE				=	0;
	
	//static bool init(string path);
	void resetToDefault(uint8_t difficulty);
};
#endif