#ifndef MENU_H
#define MENU_H

#include <iostream>
#include <string>
#include <iomanip>
#include <cmath> 
#include <algorithm>                                   
#include <vector>                                     
#include <cstdlib>                                     
#include <ctime>
#include <stack>

void showMenu() {
    cout << "**\tInstructions\t**\n"
              << "PT Boat 2 pegs\n"
              << "Frigate 3 pegs\n"
              << "Submarine 3 pegs\n"
              << "Battleship 4 pegs\n"
              << "Aircraft Carrier 5 pegs\n"
              << "Type 1 to Continue and 2 to Quit the program.\n\n";
}

#endif // MENU_H