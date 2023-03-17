#include "Character.hpp"
#include <string>

using namespace std;

Character::Character(std::string name, int hp, int dmg)
{
	Data.Name = name;
	Data.Hp = hp;
	Data.Dmg = dmg;
}

Character::Character(CharacterData data)
{
	Data = data;
}

void Character::TakeDamage(const int& damage, const std::shared_ptr<Character> attacker)
{
	Data.Hp -= damage;
	cout << "character " << Data.Name << " took " << damage << " from " << attacker->Data.Name << endl;
}

void Character::ShowCharacter()
{
	cout << "COMPUTER" << endl;
	ShowCharacterData();
}

void Character::ShowCharacterData()
{
	cout << "Name: " << Data.Name << endl;
	cout << "HP: " << Data.Hp << endl;
	cout << "DMG: " << Data.Dmg << endl << endl;
}
