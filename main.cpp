#include "Character.hpp"
#include "PlayerCharacter.hpp"

#include <iostream>
#include <vector>

using namespace std;

int Character::CharacterCount;

int main() {

    // initialize player, set default CharacterData for a player character
    shared_ptr<PlayerCharacter> player = std::make_shared<PlayerCharacter>("No Name", 100, 10);

    // intialiaze pc, and set default data 
    shared_ptr<Character> computer1 = std::make_shared<Character>("Warior", 150, 10);
    shared_ptr<Character> computer2 = std::make_shared<Character>("Mage", 90, 10);

    vector<shared_ptr<Character>> dynamicListOfCharacters;
    
    dynamicListOfCharacters.push_back(computer1);
    dynamicListOfCharacters.push_back(computer2);

    player->EnterName();

    computer1->ShowCharacter();

    computer1->SetName("Hovienko");

    computer1->ShowCharacterData(ECharacterStats::HP);

    for (auto character : dynamicListOfCharacters)
    {
        character->ShowCharacter();
    }

    computer1->TakeDamage(player->GetData().Dmg, player);

    for (auto character : dynamicListOfCharacters)
    {
        cout << "123" << endl;
        character->ShowCharacter();
    }

    return 0;
}
