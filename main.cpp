#include <iostream>
#include "include/player.hpp"
#include "include/zombie.hpp"

using namespace std;

int main()
{
	Config::init();
	Player p;// = Player();
	Zombie z;// = Zombie();
	p.setX(5);p.setY(3);
	z.setX(15);z.setY(13);
	
	cout << "Player: x,y: " << p.getX() << "," << p.getY() << endl;
	cout << "Zombie: x,y: " << z.getX() << "," << z.getY() << endl;
	
	return 0;
}