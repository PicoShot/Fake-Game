// Player.h
#ifndef PLAYER_H
#define PLAYER_H

#include <iostream>
#include <string>

class Player {
private:
    int health;
    int ammo;
    std::string name;

public:
    Player(std::string playerName, int initialHealth = 100, int initialAmmo = 30);

    void takeDamage(int damage);

    void heal(int amount);

    void useAmmo(int amount);

    void reload();

    void displayStatus() const;
};

#endif
