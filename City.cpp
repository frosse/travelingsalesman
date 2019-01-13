
#include "City.h"

City::City(int x, int y) {
    this -> x = x;
    this -> y = y;
}

void City::printCoordinates() {
    std::cout << "(" << x <<", " << y << ")" << std::endl;
}

int City::getX() { return x; }

int City::getY() { return y; }
