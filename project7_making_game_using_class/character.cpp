#include "character.h"

string Character::pick_up_weapon() {
        return "���� �ݱ�";
    }
    double Character::attack(double power) {
        return hp - power;
    }
