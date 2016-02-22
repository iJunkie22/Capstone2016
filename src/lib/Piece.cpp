//
// Created by Ethan Randall on 2/17/16.
//

#include "Piece.h"

SAMClib::Piece::Piece(int new_team) {
    std::cout << "Constructing a new piece with a team.\n";
    team = new_team;
    is_init_pos = true;
}

SAMClib::Piece::Piece() {
    is_init_pos = true;
    posX = NULL;
    posY = NULL;
    team = NULL;
    std::cout << "Constructing a piece.\n";
}

