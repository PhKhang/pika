
#include <iostream>
#include "engine/game.h"
#include "console/ui.hpp"
#include "console/color.hpp"
#include "console/screens.hpp"
#include "engine/dataType.hpp"

using namespace std;

int main(){
    // For outputing UNICODE characters
    SetConsoleOutputCP(65001);
    // ShowConsoleCursor(false);
    
    system("cls");
    SetWindowSize(118, 40);
    
    User player;
    
    // skip option with value true will go straight to the game screen
    menuScreen(player);
    
    return 0;
}