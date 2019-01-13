#ifndef CPP_CITY_H
#define CPP_CITY_H


#include <iostream>

class City {
public:

    City(int, int);
    void printCoordinates();
    int getX();
    int getY();

private:
    int x;
    int y;

};


#endif //CPP_CITY_H