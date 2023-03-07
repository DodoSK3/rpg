#include <iostream>
using namespace std;

class Character {
public:
    string name;
    int hp;
    int dmg;
}player, computer1, computer2;

void SelectName() {
    cout << "Select your name: " << endl;
    cin >> player.name;
    cout << "Your name is: " << player.name << endl << endl;
}

void OpponentList() {
    computer1.name = "Dodo";
    computer1.hp = 100;
    computer1.dmg = 10;
    computer2.name = "Marek";
    computer2.hp = 100;
    computer2.dmg = 10;

    cout << "Opponent list: " << endl;
    cout << "1. Opponent Dodo" << endl;
    cout << "HP: " << computer1.hp << endl;
    cout << "DMG: " << computer1.dmg << endl;

    cout << "2. Opponent Marek" << endl;
    cout << "HP: " << computer2.hp << endl;
    cout << "DMG: " << computer2.dmg << endl;
}

void SelectOpponent() {
    cout << "Select your opponent: " << endl;
}

int main() {


    player.hp = 100;
    player.dmg = 10;

    SelectName();
    OpponentList();

    return 0;
}
