#define _USE_MATH_DEFINES
#include <iostream>
#include "include/vector2D.hpp"
using namespace std;

int main()
{
	Vector2D vec = Vector2D(M_PI);
	cout << "angle: " << M_PI << "\n";
	cout << "x|y: " << vec.x << "|" << vec.y << "\n";
	vec = Vector2D(1,1);
	vec = vec / 0.5;
	cout << "\n(1|1)/0.5: " << vec.x << "|" << vec.y << "\n";
	return 0;
}