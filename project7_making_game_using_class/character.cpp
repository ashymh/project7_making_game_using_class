#include "character.h"

string Character::pick_up_weapon() {
        return "무기 줍기";
    }
    double Character::attack(double power) {
        return hp - power;
    }
