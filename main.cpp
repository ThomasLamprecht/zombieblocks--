#include <iostream>
#include "include/player.hpp"
#include "include/zombie.hpp"

using namespace std;

int main()
{
	Player p;// = Player();
	Zombie z;// = Zombie();

	cout << "Player: w,h: " << p.w << "," << p.h << "\n";
	cout << "Zombie: w,h: " << z.w << "," << z.h << "\n";
	
	return 0;
}