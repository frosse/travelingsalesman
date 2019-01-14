#ifndef CPP_TRAVELINGSALESMAN_H
#define CPP_TRAVELINGSALESMAN_H

#include <iostream>
#include "City.h"
#include <stdlib.h>     /* For rand() */
#include <vector>       /* vectors */
#include <math.h>       /* For square root */

using namespace std;

class TravelingSalesman {
public:
    TravelingSalesman();
    TravelingSalesman(int);
    ~TravelingSalesman();
    int getAmount();
    vector<vector<double>> getDistances();
    void setDistance(int i, int j, double value);
    double getDistanceFromStartCity(int city);

private:
    int cityAmount;
    vector<City> listOfCities;
    vector<vector<double> > distances;
    vector<double> distancesFromStartCity;

    double calculateDistance(City, City);
    vector<double> calculateDistancesFromStartCity(int city);
    void initializeCities();
    void printCities();
    void printDistances();
    vector<vector<double>> calculateDistances();
};


#endif //CPP_TRAVELINGSALESMAN_H