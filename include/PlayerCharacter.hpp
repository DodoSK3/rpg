#pragma once
#include <iostream>
#include "Character.hpp"

using namespace std;

class PlayerCharacter : public Character
{
public:
	void EnterName();

	PlayerCharacter(string name, int hp, int dmg);

	void ShowCharacter() override;

	Character Character;
};

class ComputerCharacter : public Character
{

};
