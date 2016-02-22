//
// Created by Ethan Randall on 2/17/16.
//

#ifndef SAMCHESSLIB_PIECE_H
#define SAMCHESSLIB_PIECE_H

#include "SmartTile.h"

namespace SAMClib {
    class Piece {
        friend class SmartTile;

        protected:
            int team;
            int posX;
            int posY;
            bool is_init_pos;

        public:
        Piece();
        Piece(int new_team);
    };
}

#endif //SAMCHESSLIB_PIECE_H
