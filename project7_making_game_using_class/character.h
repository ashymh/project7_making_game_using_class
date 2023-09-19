#pragma once

#include <iostream>

using namespace std;

class Character {
protected:
    double hp;
    double levels;
    string weapons;

public:
    static string pick_up_weapon();

    double attack(double power);
};