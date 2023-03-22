#ifndef CHARACTERDATA_HPP
#define CHARACTERDATA_HPP

#include <iostream>
#include "ECharacterStats.hpp"

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
    Character() {};
    Character(string name, int hp, int dmg);
    Character(CharacterData data);

    virtual void ShowCharacter();
    void ShowCharacterData();
    void ShowCharacterData(ECharacterStats stat);

    void TakeDamage(const int& damage, const std::shared_ptr<Character> attacker);
    
    // getter and setter for Data.Name
    void SetName(const string& newName, void(callback)(const string& message));
    string GetName();

    // getter for Data 
    CharacterData GetData();

    static int CharacterCount;

protected:
    CharacterData _data;
};

#endif // CHARACTERDATA_HPP
