//
// Created by Ethan Randall on 2/17/16.
//

#ifndef SAMCHESSLIB_SMARTTILE_H
#define SAMCHESSLIB_SMARTTILE_H

#include <iostream>
#include "Piece.h"

namespace SAMClib {
    class Piece;
    class SmartTile {
    private:

    public:
        SmartTile *n;
        SmartTile *ne;
        SmartTile *e;
        SmartTile *se;
        SmartTile *s;
        SmartTile *sw;
        SmartTile *w;
        SmartTile *nw;
        SmartTile *self;
        SAMClib::Piece *payload;

        SmartTile();

        ~SmartTile();

    };

}

#endif //SAMCHESSLIB_SMARTTILE_H
