#pragma once
#include <iostream>

using namespace std;

struct CharacterData
{
    string Name;
    int Hp;
    int Dmg;
};

class Character 
{
public:
    CharacterData Data;

    Character() {};
    Character(string name, int hp, int dmg);
    Character(CharacterData data);

    virtual void ShowCharacter();
    void ShowCharacterData();
    void TakeDamage(const int& damage, const std::shared_ptr<Character> attacker);
};

