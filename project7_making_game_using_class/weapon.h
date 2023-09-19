#pragma once

#include <iostream>

using namespace std;

class Weapon {
protected:
    double power;
    int possible_attacks;

public:
    void attacks();
};