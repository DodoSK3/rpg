#include "Character.hpp"
#include "ECharacterStats.hpp"
#include <string>

using namespace std;

Character::Character(std::string name, int hp, int dmg)
{
	_data.Name = name;
	_data.Hp = hp;
	_data.Dmg = dmg;

	CharacterCount++;
	cout << "1 Pocet Charakterov: " << CharacterCount << endl;
}

Character::Character(CharacterData data)
{
	_data = data;

	CharacterCount++;
	cout << "2 Pocet Charakterov: " << CharacterCount << endl;
}

void Character::SetName(string newName)
{
	_data.Name = newName;
}

string Character::GetName()
{
	return _data.Name;
}

CharacterData Character::GetData()
{
	return _data;
}

void Character::TakeDamage(const int& damage, const std::shared_ptr<Character> attacker)
{
	_data.Hp -= damage;
	cout << "character " << _data.Name << " took " << damage << " from " << attacker->_data.Name << endl;
}

void Character::ShowCharacter()
{
	cout << "COMPUTER" << endl;
	cout << "Pocet Charakterov: " << CharacterCount << endl;
	ShowCharacterData();
}

void Character::ShowCharacterData()
{
	cout << "Name: " << _data.Name << endl;
	cout << "HP: " << _data.Hp << endl;
	cout << "DMG: " << _data.Dmg << endl << endl;
}

void Character::ShowCharacterData(ECharacterStats stat)
{
	cout << "1 Show only one stat data of name " << ToString(stat) << endl;
	cout << "2 Show only one stat data of name " << StatToStringMap[stat] << endl << endl;

	switch (stat)
	{
	case ECharacterStats::NAME:
		cout << "Name: " << _data.Name << endl;
		break;
	case ECharacterStats::HP:
		cout << "HP: " << _data.Hp << endl;
		break;
	case ECharacterStats::DMG:
		break;
		cout << "DMG: " << _data.Dmg << endl << endl;
	}
}
