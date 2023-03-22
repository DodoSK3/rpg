#include "Character.hpp"
#include "PlayerCharacter.hpp"

#include <iostream>
#include <vector>

using namespace std;

int Character::CharacterCount;

// classic function
void OnSetName(const string& message)
{
    cout << "normalna funkcia\n";
    cout << "callback response: " << message << "\n";
}

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

    // LAMBDA FUNKCIA:
    // #########################
    // SetName funkcia ma druhy parameter definovanu ako "callback" funkciu.
    // But si definujeme funkciu a vlozime ako parameter... (OnSetName je definovana vyssie)
    computer1->SetName("Velke Hovienko", OnSetName);

    // ...alebo mozeme priamo deklarnut funkciu v parametri aj to co sa ma vykonat (to je v '{}' ).
    // vola sa to Lambda funkcia. Lambda sa definuje takto: [](){}
    // [] - capture list (je prazdny, ale ak by sme boli v nejakej ne-statickej classe a chceli by sme volat nejaku funkciu, tak tam dame this: [this]
    // () - parametre lambda funkcie
    // { } - telo funkcie. Co ma lambda funkcia spravit pri zavolani. V nasom pripade sa tato lambda funkcia zavola v SetName na riadku 31
    // https://www.programiz.com/cpp-programming/lambda-expression
    computer1->SetName("Hovienko", [](auto message)
        // telo lambda funkcie
        {
            cout << "Lambda function! Ou yea\n";
            cout << "callback response: " << message << "\n";
        });


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
