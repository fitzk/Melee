/*****************************************************************
* Name:					Kayla Fitzsimmons
* Date:					2/9/2015		
* Course: 				CS162-400
* File Name: 			Dice.h
*
* Over View:  rolls dice.
*****************************************************************/
#ifndef DICE_H
#define	DICE_H
#include<cstdlib>
#include<ctime>

class Dice
{
	public:
		Dice();
		void setNumSides(int numSides);
		virtual int rollDice() const;
		int rollMoreDice(int);
	protected:
		int numSides;
};

/*
 * Method Name  : Dice
 *
 * Synopsis     : Dice::Dice()
 *
 * Description  : 
 * 
 * Returns      : 
 */

Dice::Dice()
{
	numSides = 6;
}

/*
 * Method Name  : setNumSides
 *
 * Synopsis     : void Dice::setNumSides(int numSides)
 *
 * Arguments    : int  numSides : 
 *
 * Description  : 
 * 
 */
void Dice::setNumSides(int numSides)
{
	this->numSides = numSides;
}

/*
 * Method Name  : rollDice
 *
 * Synopsis     : int Dice::rollDice()  *
 * Description  : 
 * 
 * Returns      : int 
 */
int Dice::rollDice() const{
	
	return (rand() % numSides) + 1;

}
//function for overloaded dice
/* int LoadedDice::rollDice() const{
	int sides;
	int call = (rand() % 2) + 1;
	if(call == 1)
	{
		sides = Dice::rollDice();
		return sides;
	}
	else
	{
		sides = numSides;
		return sides;
	}
}
 */
/*
 * Method Name  : rollMoreDice
 *
 * Synopsis     : int Dice::rollMoreDice(int numDie)
 *
 * Arguments    : int  numDie : 
 *
 * Description  : Creates dice objects, rolls them, 
 *				  and return the sum
 * 
 * Returns      : int 
 */

int Dice::rollMoreDice(int numDie)
{
	int total = 0;
	Dice* array = new Dice[numDie];
	
	for(int i = 0; i < numDie; i++)
	{
		total += array[i].rollDice();
	}

	delete [] array;
	
	return total;
	
} 
#endif