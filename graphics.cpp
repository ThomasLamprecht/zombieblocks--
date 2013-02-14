#include "include/graphics.hpp"

Graphics& Graphics::getInstanceOf()
{
	static Graphics instance;
	return instance;
}