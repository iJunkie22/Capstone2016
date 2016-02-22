//
// Created by Ethan Randall on 2/17/16.
//

#include "SmartTile.h"

using namespace SAMClib;

SmartTile::SmartTile() {
    std::cout << "Creating a new smart tile\n";
    n = NULL;
    ne = NULL;
    e = NULL;
    se = NULL;
    s = NULL;
    sw = NULL;
    w = NULL;
    nw = NULL;
    self = this;
    payload = NULL;
}

SmartTile::~SmartTile() {
    std::cout << "Destructing a smart tile\n";

}

