#ifndef VECTOR2D_H
#define VECTOR2D_H

#include "vector2D.hpp"

class Vector2D
{
private:
	double x, y;
public:
	Vector2D();
	Vector2D(double x, double y);
	Vector2D(double x1, double y1, double x2, double y2);
	Vector2D(double angle);
	Vector2D operator + (Vector2D);
	Vector2D operator - (Vector2D);
	Vector2D operator * (double);
	Vector2D operator + (Vector2D);
};

#endif