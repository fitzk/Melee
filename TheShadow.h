#ifndef THESHADOW_H
#define	THESHADOW_H_H
#include"Creature.h"

class TheShadow: public Creature
{
	public:
	Dice A;
	TheShadow(int str = 12, int armr = 0) : Creature(str, armr){};
	int attack();
	int defend();
};

/*
 * Method Name  : attack
 *
 * Synopsis     : int TheShadow::attack() 
 *
 * Description  : 
 * 
 * Returns      : int 
 */
int TheShadow::attack(){
	
	this->A.setNumSides(10);
	int attack = A.rollMoreDice(2);
	return attack;
}

/*
 * Method Name  : defend
 *
 * Synopsis     : int TheShadow::defend() 
 *
 * Description  : 
 * 
 * Returns      : int 
 */
int TheShadow::defend(){
	
	this->A.setNumSides(6);
	int defence = A.rollMoreDice(1);
	return defence;
}


#endif