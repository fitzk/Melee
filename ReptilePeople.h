#ifndef REPTILEPEOPLE_H
#define	REPTILEPEOPLE_H
#include"Creature.h"
#include"Dice.h"

class ReptilePeople : public Creature
{
	public:
	Dice A;
	ReptilePeople(int str = 18, int armr = 7) : Creature(str, armr){};
	int attack();
	int defend();
};
/*
 * Method Name  : attack
 *
 * Synopsis     : int ReptilePeople::attack() 
 *
 * Description  : 
 * 
 * Returns      : int 
 */
int ReptilePeople::attack(){
	
	this->A.setNumSides(6);
	int attack = A.rollMoreDice(3);
	return attack;
}

/*
 * Method Name  : defend
 *
 * Synopsis     : int ReptilePeople::defend() 
 *
 * Description  : 
 * 
 * Returns      : int 
 */
int ReptilePeople::defend(){
	
	this->A.setNumSides(6);
	int defence = A.rollMoreDice(1);
	return defence;
}


#endif