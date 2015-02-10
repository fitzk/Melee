#ifndef BARBARIAN_H
#define	BARBARIAN_H
#include"Creature.h"
#include"Dice.h"
//class Dice

class Barbarian	: public Creature
{
	public:
	Dice A;
	Barbarian(int str = 12, int armr = 0) : Creature(str, armr){};
	int attack();
	int defend();
};

/*
 * Method Name  : attack
 *
 * Synopsis     : int Barbarian::attack() 
 *
 * Description  : 
 * 
 * Returns      : int 
 */
int Barbarian::attack(){
	
	this->A.setNumSides(6);
	int attack = A.rollMoreDice(2);
	return attack;
}

/*
 * Method Name  : defend
 *
 * Synopsis     : int Barbarian::defend() 
 *
 * Description  : 
 * 
 * Returns      : int 
 */
int Barbarian::defend(){
	
	this->A.setNumSides(6);
	int defence = A.rollMoreDice(2);
	return defence;
}
#endif