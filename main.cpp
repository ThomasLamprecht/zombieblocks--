#include <iostream>
#include "include/player.hpp"
#include "include/zombie.hpp"

using namespace std;

int main()
{
	Player p;// = Player();
	Zombie z;// = Zombie();
	p.setX(5);p.setY(3);
	z.setX(15);z.setY(13);
	
	cout << "Player: w,h: " << p.getX() << "," << p.getY() << "\n";
	cout << "Zombie: w,h: " << z.getX() << "," << z.getY() << "\n";
	
	return 0;
}