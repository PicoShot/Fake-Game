#include "Player.h"

Player::Player(std::string playerName, int initialHealth, int initialAmmo)
    : name(playerName), health(initialHealth), ammo(initialAmmo) {}

void Player::takeDamage(int damage) {
    health -= damage;
    if (health < 0) {
        health = 0;
    }
}

void Player::heal(int amount) {
    health += amount;
    if (health > 100) {
        health = 100;
    }
}

void Player::useAmmo(int amount) {
    if (ammo >= amount) {
        ammo -= amount;
    }
    else {
    }
}

void Player::reload() {
    ammo = 30;
}

void Player::displayStatus() const {
    std::cout << "Player: " << name << ", Health: " << health << ", Ammo: " << ammo << std::endl;
}
