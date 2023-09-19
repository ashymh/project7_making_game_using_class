#include <iostream>
#include "character.h"
#include "sword.h"
#include "gun.h"

using namespace std;

int main()
{
    Sword sword1;
    Gun gun1;
    
    cout << "칼의 정보" << endl;
    sword1.attacks();
    cout << "공격하기 ! ";
    sword1.attack();

    cout << endl;

    cout << "총의 정보" << endl;
    gun1.attacks();
    cout << "공격하기 ! ";
    gun1.attack();
   
}

