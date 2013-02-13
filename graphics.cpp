#include "include/graphics.hpp"

static Graphics Graphics::g = null;

static Graphics Graphics::getInstanceOf()
{
	if(g==null)
		g = new Graphics();
	return g;
}