#include "include/graphics.hpp"
/**
 * @file	graphics.cpp
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
 * The Graphics class represents the graphic abstraction for the game.
 * It uses either OpenGL >= 3.2 or as fallback OpenGL >= 1.2
 * or as last fallback the SDL Software Renderer.
 */

/**
 * Get a singleton instance of the Graphics abstraction stack
 *
 * As the Graphic stack should be everywere equal
 * You can only get one instance through this method.
 * 
 * @return returns the Graphics stack abstraction
 */
Graphics& Graphics::getInstanceOf()
{
	static Graphics instance;
	return instance;
}

/**
 * Inits the graphics stack and prepares everything for drawing.
 *
 * Initalises a valid graphic context (if possible)
 * an prepares it.
 *
 * @param TYPE defines the backend which will be used for the context
 * @return returns the Graphics stack abstraction
 */
bool Graphics::init(uint8_t TYPE)
{
	if(TYPE == OPENGL_1_2)
	{
		
	}
	else if(TYPE == OPENGL_3_2)
	{
		
	}	
	else if(TYPE == SDL_SOFT)
	{
		
	}
	return true;
}

/**
 * Draws a rectangle.
 *
 * Draws a simple rectangle independent of the underlying Hardware/System
 *
 * @param x Defines the x coordinate of the rectangle
 * @param y Defines the y coordinate of the rectangle
 * @param w Defines the width of the rectangle
 * @param h Defines the height of the rectangle
 * @param color Defines the color of the rectangle in #RGBA format
 */
void Graphics::drawRectangle(int x, int y, int w, int h, int color)
{
	return;
}