//
// Created by Ethan Randall on 2/17/16.
//

#include "Pawn.h"

SAMClib::Pawn::Pawn() {
    is_init_pos = true;
    posX = NULL;
    posY = NULL;
    team = NULL;
    std::cout << "Constructing a pawn.\n";
}

SAMClib::Pawn::~Pawn() {
    std::cout << "Destructing a pawn.\n";
}
