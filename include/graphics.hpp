#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SDL/SDL.h>
#include "log.hpp"

/**
 * @file	include/graphics.hpp
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
class Graphics
{
private:
	Graphics() : render_type(SDL_SOFT) {}; // singleton stuff
	Graphics(const Graphics&);            // nicht kopierbar
	Graphics& operator=(const Graphics&); // { return *this; }  // nicht zuweisbar
// 	~Graphics() {};

	uint8_t render_type;
	SDL_Surface *screen;

public:
	const static uint8_t SDL_SOFT=0, OPENGL_1_2=1, OPENGL_3_2=2, OPENGL_HIGHEST=3;
	bool init(uint8_t TYPE);

	static Graphics& getInstanceOf();
	
	void drawRectangle(int x, int y, int w, int h, int color);
};
#endif