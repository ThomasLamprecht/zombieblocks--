#include "include/config.hpp"

void Config::init()
{
	
}

void Config::init(string path)
{
	
}

void Config::init(int difficulty)
{
	
}

void Config::save()
{
	
}


double Config::getDouble(int id)
{
	return double_v[id];
}


int Config::getInt(int id)
{
	return int_v[id];
}


string Config::getString(int id)
{
	return string_v[id];
}