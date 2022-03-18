#pragma once
#include"Character.h"
#include<ctime>
#include<vector>
#include"Functions.h"
#include<fstream>

//using namespace std;

class Game
{
public:
	Game();
	virtual ~Game();

	//opperators

	//functions
	void initGame();
	void mainMenu();
	void createNewCharacter();
	void saveCharacters();
	void loadCharacters();



	//accessors
	inline bool getPlaying() const { return this->playing; }

	//modifiers

private:
	int choice;
	bool playing;

//character related
	int activeCharacter;
	std::vector<Character> characters;
	std::string fileName;
};

