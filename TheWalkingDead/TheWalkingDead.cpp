#include <iostream>
#include <string>
#include <ctime>

enum Weapons{FISTS, GUN, SHOTGUN, REVOLVER, SNIPER, MACHINE_GUN, MAX};
//weapons:: valor

class Player {
public:
	Weapons Weapon;
	float precision;
	int life;

	Player() : (Weapon(static_cast <Weapons> (rand () % 6))), precision ((rand () % 10)/10.0f), life((rand () % 1 + 100))
	{
		
	};

	void attack(Zombie & z) {
	}
	bool isAlive;
	if (life > 1){
		isAlive = True;
	}
	else {
		isAlive = False;
	}

};

class Zombie {
public:
	int distancetoplayer;
	float speed;
	float damage;
	float life;

	Zombie () : distancetoplayer ((rand () % 180 + 20), speed (rand() % 20)10.0f), damage (rand() % 20), life rand() % 101))

	distancetoplayer = rand() % 180 + 20;
	

	void attack(Player & p) {


	}

	bool isAlive;
	if (life > 1) {
		isAlive = True;
	}
	else {
		isAlive = False;
	}



};

void Player::attack(Zombie & z) {

	z.life -= ((static_cast<float>(weapon)) * Player::precision);

}

void Zombie::attack(Player & p) {
	if (distancetoplayer <= 0) {
		p.life -= Zombie::damage;
	}
	

}

void main () {
	
	srand(time(NULL));
	Player player;

	const int numz{ 10 };
	Zombie array[numz];
	bool ZombiesAreAlive;

	do {



	}
	While ( Player :: life > 0 || numz > 1)



}