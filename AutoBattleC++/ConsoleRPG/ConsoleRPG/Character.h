#pragma once
#include"Inventory.h"

class Character
{
public:
	Character();
	virtual ~Character();

	//functions
	void initialize(const std::string name);
	void printStats() const;
	void levelUp();
	std::string getAsString()const;

	//accessors
	inline const double& getX() const { return this->xPos; };
	inline const double& getY() const { return this->yPos; };
	inline const std::string& getName() const { return this->name; };
	inline const int& getLevel() const { return this->level; };
	inline const int& getExp() const { return this->exp; };
	inline const int& getExpNext() const { return this->expNext; };
	inline const int& getHp() const { return this->hp; };
	inline const int& getHpMax() const { return this->hpMax; };
	inline const int& getStamina() const { return this->stamina; };
	inline const int& getDamageMin() const { return this->damageMin; };
	inline const int& getdamageMax() const { return this->damageMax; };
	inline const int& getDefense() const { return this->defence; };


	//modifiers

private:

	double xPos;
	double yPos;

	std::string name;
	int level;
	int exp;
	int expNext;

	int strenght;
	int vitality;
	int dexterity;
	int intelligence;

	int hp;
	int hpMax;
	int stamina;
	int staminaMax;
	int damageMin;
	int damageMax;
	int defence;
	int luck;

	int statPoints;
    int skillPoints;

};

