#ifndef BLUEMEN_H
#define	BLUEMEN_H
#include"Creature.h"
#include"Dice.h"

class BlueMen: public Creature
{
	public:	
	Dice A;
	BlueMen(int str = 12, int armr = 3) : Creature(str, armr){};
	int attack();
	int defend();
};
/*
 * Method Name  : attack
 *
 * Synopsis     : int BlueMen::attack() 
 *
 * Description  : 
 * 
 * Returns      : int 
 */
int BlueMen::attack(){
	
	this->A.setNumSides(10);
	int attack = A.rollMoreDice(2);
	return attack;
}

/*
 * Method Name  : defend
 *
 * Synopsis     : int BlueMen::defend() 
 *
 * Description  : 
 * 
 * Returns      : int 
 */
int BlueMen::defend(){
	
	this->A.setNumSides(6);
	int defence = A.rollMoreDice(3);
	return defence;
}



#endif