#include "PlayerCharacter.hpp"

void PlayerCharacter::EnterName()
{
    cout << "Select your name: " << endl;
    cin >> Character::_data.Name;
    cout << "Your name is: " << _data.Name << endl << endl;
}

PlayerCharacter::PlayerCharacter(string name, int hp, int dmg) : Character::Character(name, hp, dmg)
{}

void PlayerCharacter::ShowCharacter()
{
    cout << "PLAYER" << endl;
    Character::ShowCharacterData();
}
