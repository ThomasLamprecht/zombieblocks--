#ifndef GRAPHICS_H
#define GRAPHICS_H

#include <SDL/SDL.h>

class Graphics
{
private:
	uint8_t render_type;
	SDL_Surface *screen;
	Graphics();
	static Graphics *g;
public:
	const static uint8_t SDL_SOFT=0, OPENGL=1;
	bool init(uint8_t TYPE);

	static Graphics getInstanceOf();

	void drawRectangle(int x, int y, int w, int h, int color);
};
#endif