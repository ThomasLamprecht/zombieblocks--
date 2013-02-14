# include "include/vector2D.hpp"
/**
 * Inits a 2D Vector with x and y zero
 *
 * @return returns a 2D Vector
 */
Vector2D::Vector2D()
{
	this->x = 0;
	this->y = 0;
}
/**
 * Inits a 2D Vector
 *
 * @param x defines x value of the vector
 * @param y defines y value of the vector
 * @return returns a 2D Vector
 */
Vector2D::Vector2D(double x, double y)
{
	this->x = x;
	this->y = y;
}
/**
 * Inits a 2D Vector from two points
 *
 * @param x1 defines x value of point one
 * @param y1 defines y value of point one
 * @param x2 defines x value of point two
 * @param y2 defines y value of point two
 * @return returns a 2D Vector
 */
Vector2D::Vector2D(double x1, double y1, double x2, double y2)
{
	Vector2D((x2-x1), (y2-y1));
}

/**
 * Inits a 2D Vector
 *
 * @param angle defines angle of the vector
 * @return returns a 2D Vector
 */
Vector2D::Vector2D(double angle)
{
	this->x = cos(angle);
	this->y = sin(angle);
}

/**
 * Cuts the vector down to the lenght one
 *
 * @return returns a 2D Vector
 */
Vector2D Vector2D::basic()
{
	double l = this->lenght();
	this->x /= l;
	this->y /= l;
	return *this;
}

/**
 * Gets the lenght of a vector
 *
 * @return returns the lenght of a vector as a double
 */
double Vector2D::lenght()
{
	return sqrt(pow(this->x, 2.) + pow(this->y, 2.));
}

Vector2D Vector2D::operator + (Vector2D v) // adds two vectors
{
	Vector2D tmp;
	tmp.x = this->x + v.x;
	tmp.y = this->y + v.y;
	return tmp;
}

Vector2D Vector2D::operator - (Vector2D v)
{
	Vector2D tmp;
	tmp.x = this->x - v.x;
	tmp.y = this->y - v.y;
	return tmp;
}

double Vector2D::operator * (Vector2D v) // scalar product of two vectors
{
	return this->x*v.x + this->y*v.y;
}

Vector2D Vector2D::operator * (double s) // multiplies x and y with a scalar
{
	Vector2D tmp;
	tmp.x = this->x * s;
	tmp.y = this->y * s;
	return tmp;
}

Vector2D Vector2D::operator / (double s) // dividides x and y with a scalar
{
	Vector2D tmp;
	tmp.x = this->x / s;
	tmp.y = this->y / s;
	return tmp;
}

double Vector2D::lenght(Vector2D v)
{
	return sqrt(pow(v.x, 2.) + pow(v.y, 2.));
}
Vector2D Vector2D::basic(Vector2D v)
{
	return v / Vector2D::lenght(v);
}