#ifndef CPP_TRAVELINGSALESMAN_H
#define CPP_TRAVELINGSALESMAN_H

#include <iostream>
#include "City.h"
#include <stdlib.h>     /* For rand() */
#include <vector>       /* vectors */
#include <math.h>       /* For square root */
#include <cstdlib>

using namespace std;

class TravelingSalesman {
public:
    TravelingSalesman(int);
    ~TravelingSalesman();

private:
    int cityAmount;
    vector<City> listOfCities;
    vector<vector<double> > distances;

    double calculateDistance(City, City);
    void initializeCities();
    void printCities();
    void printDistances();
    vector<vector<double>> calculateDistances();
};


#endif //CPP_TRAVELINGSALESMAN_H