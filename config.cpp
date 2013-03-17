#include "include/config.hpp"

Config& Config::instance()
{
	static Config instance;
	return instance;
}

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

void Config::set(double value, uint32_t index)
{
	double_v.at(index) = value;
}
void Config::set(int value, uint32_t index)
{
	int_v.at(index) = value;
}
void Config::set(string value, uint32_t index)
{
	string_v.at(index) = value;
}

double Config::getDouble(int id)
{
	return double_v.at(id);
}


int Config::getInt(int id)
{
	return int_v.at(id);
}


string Config::getString(int id)
{
	return string_v.at(id);
}