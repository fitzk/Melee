#include<iostream>
#include"Creature.h"
#include"Barbarian.h"
#include"Goblin.h"
#include"BlueMen.h"
#include"ReptilePeople.h"
#include"TheShadow.h"

/*
 * Name         : battle
 *
 * Synopsis     : int battle(int att, int def) 
 *
 * Arguments    : int  att : 
 *                int  def : 
 *
 * Description  : 
 * 
 * Returns      : int 
 */
void battle(Creature& a, Creature& b){
	
	int damage, newStrength;
	int att = a.attack();
	int def = b.defend();
	
	damage = att - def;
	damage -= b.getArmor();
	newStrength = b.getStrength()-damage;
	b.setStrength(newStrength);

	
/* 	std::cout << "Creature a: " << a.getStrength() << std::endl;
	std::cout << "Creature b: " << b.getStrength() << std::endl; */
	
} 

/*
 * Name         : main
 *
 * Synopsis     : int main()
 *
 * Description  : 
 * 
 * Returns      : int 
 */
int main()
{
	TheShadow a;
	Goblin b;
	
	for(int i = 0; i < 5; i++){	
		std::cout << " Shadow attacks Goblin " << std::endl;
		battle(a,b);
		std::cout << " Goblin attacks Shadow " << std::endl;
		battle(b,a);
	}

	
	return 0;
}

