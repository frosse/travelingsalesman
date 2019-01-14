#include "TravelingSalesman.h"

TravelingSalesman::TravelingSalesman()=default;

TravelingSalesman::TravelingSalesman(int amount) {
    cityAmount = amount;
    distances.resize(cityAmount, vector<double> (cityAmount,0));
    initializeCities();
    printCities();
    distances = calculateDistances();
    distancesFromStartCity = calculateDistancesFromStartCity(0);
    printDistances();
}

TravelingSalesman::~TravelingSalesman() {

}

void TravelingSalesman::initializeCities() {

    srand (time(NULL));

    for( int i = 0; i < cityAmount; i++) {
        listOfCities.push_back(City(rand() % (cityAmount * 10) +1 , rand() % (cityAmount * 10) + 1));
    }
}

void TravelingSalesman::printCities() {
    for(vector<City>::iterator it = listOfCities.begin(); it != listOfCities.end(); it++) {
        it -> printCoordinates();
    }
}

vector<vector<double>> TravelingSalesman::calculateDistances() {
    for(int i = 0; i < cityAmount; i++) {
        for(int j = 0; j < cityAmount; j++) {
            if( i == j) {
                distances[i][j] = 0.0;
            } else {
            distances[i][j] = calculateDistance(listOfCities[i], listOfCities[j]);
            }
        }
    }
    return distances;
}

double TravelingSalesman::calculateDistance(City city1, City city2) {
    return sqrt( pow( city1.getX() - city2.getX(), 2) + pow(city1.getY() - city2.getY(), 2));
}

void TravelingSalesman::printDistances() {
    for(int i = 0; i < cityAmount; i++) {
        for(int j = 0; j < cityAmount; j++) {
            cout << distances[i][j] << " ";
        }
        cout << endl;
    }
}

int TravelingSalesman::getAmount() {
    return cityAmount;
}

vector<vector<double>> TravelingSalesman::getDistances() {
    return distances;
}

void TravelingSalesman::setDistance(int i, int j, double value) {
    distances[i][j] = value;
}

vector<double> TravelingSalesman::calculateDistancesFromStartCity(int city) {
    vector<double> distancesFromStartCity(cityAmount, 0.0);
    for (int i = 0; i < cityAmount; i++) {
        distancesFromStartCity[i] = distances[i][city];
    }
    return distancesFromStartCity;

}

double TravelingSalesman::getDistanceFromStartCity(int city) {
    return distancesFromStartCity[city];
}
