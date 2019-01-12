#include "TravelingSalesman.h"
#include "City.h"

TravelingSalesman::TravelingSalesman(int amount) {
    cityAmount = amount;
    srand (time(NULL));
    for( int i = 0; i < cityAmount; i++) {
        listOfCities.push_back(City(rand() % (cityAmount * 10) +1 , rand() % (cityAmount * 10) + 1));
    }
}

TravelingSalesman::~TravelingSalesman() {
}

void TravelingSalesman::printCity() {
    for(std::vector<City>::iterator it = listOfCities.begin(); it != listOfCities.end(); it++) {
        it -> printCoordinates();
    }
}