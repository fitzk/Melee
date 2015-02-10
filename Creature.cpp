#include"Creature.h"


/*
 * Method Name  : Creature
 *
 * Synopsis     : Creature::Creature(int str, int armr) *
 * Arguments    : int  str : 
 *                int  armr : 
 *
 * Description  : 
 * 
 * Returns      : 
 */
Creature::Creature(int str, int armr){
	
	this->strength = str;
	this->armor = armr;
	srand(time(NULL)); //seeds random number generator
}

/*
 * Name         : setStrength
 *
 * Synopsis     : void setStrength(int s)
 *
 * Arguments    : int  s : 
 *
 * Description  : 
 * 
 */
void Creature::setStrength(int s)
{
	this->strength = s;
}
/*
 * Name         : getStrength
 *
 * Synopsis     : int getStrength()
 *
 * Description  : 
 * 
 * Returns      : int 
 */
int Creature::getStrength()
{
	return strength;
}
/*
 * Name         : getArmor
 *
 * Synopsis     : int getArmor()
 *
 * Description  : 
 * 
 * Returns      : int 
 */
int Creature::getArmor()
{
	return armor;
}