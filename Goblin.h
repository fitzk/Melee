#ifndef GOBLIN_H
#define	GOBLIN_H
#include"Creature.h"
#include"Dice.h"

class Goblin : public Creature
{
	public:
	Dice A;
	Goblin(int str = 8, int armr = 3) : Creature(str, armr){};
	int attack();
	int defend();
};
/*
 * Method Name  : attack
 *
 * Synopsis     : int Goblin::attack() 
 *
 * Description  : 
 * 
 * Returns      : int 
 */
int Goblin::attack(){
	
	this->A.setNumSides(6);
	int attack = A.rollMoreDice(2);
	return attack;
}

/*
 * Method Name  : defend
 *
 * Synopsis     : int Goblin::defend() 
 *
 * Description  : 
 * 
 * Returns      : int 
 */
int Goblin::defend(){
	
	this->A.setNumSides(6);
	int defence = A.rollMoreDice(1);
	return defence;
}


#endif