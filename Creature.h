#ifndef CREATURE_H
#define	CREATURE_H
#include<cstdlib>
#include<ctime>


class Creature{
	
	
	protected:
		int strength;
		int armor;
	public:
		void setStrength(int s);
		int getStrength();
		int getArmor();
		Creature(int, int);
		virtual int attack()=0;
		virtual int defend()= 0;

};

#endif