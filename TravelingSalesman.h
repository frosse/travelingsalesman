#ifndef CPP_TRAVELINGSALESMAN_H
#define CPP_TRAVELINGSALESMAN_H

#include <iostream>
#include "City.h"
#include <stdlib.h>     /* For rand() */
#include <vector>       /* vectors */

class TravelingSalesman {
    public:
        TravelingSalesman(int);
        ~TravelingSalesman();
        void printCity();

    private:
        int cityAmount;
        std::vector<City> listOfCities;
};


#endif //CPP_TRAVELINGSALESMAN_H