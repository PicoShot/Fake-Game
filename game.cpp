#include <iostream>
#include <cstdlib>
#include "Player.h"
using namespace std;

int start() {
    int input;
    cout << "1. Damage (5)" << endl;
    cout << "2. Heal (5)" << endl;
    cout << "3. Fire (5)" << endl;
    cout << "4. Reload (5)" << endl;
    cout << "5. Quit" << endl;
    cout << "Enter Your Selection: ";
    cin >> input;
    system("cls");
    return input;
}

int main() {
    cout << "Enter Player Name: ";
    string name;
    cin >> name;
    system("cls");

    Player playerK(name);
    playerK.displayStatus();
    int input = start();

    while (true) {
        playerK.displayStatus();
        input = start();

        switch (input) {
        case 1:
            playerK.takeDamage(5);
            break;
        case 2:
            playerK.heal(5);
            break;
        case 3:
            playerK.useAmmo(5);
            break;
        case 4:
            playerK.reload();
            break;
        case 5:
            cout << "Quitting... Please Wait" << endl;
            return 0;
        default:
            cout << "Invalid selection. Please try again." << endl;
            break;
        }
    }
}
