# include "include/vector2D.hpp"

Vector2D::Vector2D()
{
	this->x = 0;
	this->y = 0;
}

Vector2D::Vector2D(double x, double y)
{
	this->x = x;
	this->y = y;
}

Vector2D::Vector2D(double x1, double y1, double x2, double y2)
{
	Vector2D((x2-x1), (y2-y1));
}

Vector2D::Vector2D(double angle)
{
	this->x = cos(angle);
	this->y = sin(angle);
}

Vector2D Vector2D::basic()
{
	double l = this->lenght();
	this->x /= l;
	this->y /= l;
}

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