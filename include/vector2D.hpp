#ifndef VECTOR2D_H
#define VECTOR2D_H

#include <math.h>

class Vector2D
{
public:
	double x, y;

	Vector2D();
	Vector2D(double x, double y);
	Vector2D(double x1, double y1, double x2, double y2);
	Vector2D(double angle);
	Vector2D basic();
	double lenght();
	Vector2D operator + (Vector2D); // adds two vectors
	Vector2D operator - (Vector2D);
	double operator * (Vector2D); // cross product of two vectors
	Vector2D operator * (double); // multiplies x and y with a scalar
	Vector2D operator / (double); // dividides x and y with a scalar
	static double lenght(Vector2D v);
	static Vector2D basic(Vector2D v);
};

#endif