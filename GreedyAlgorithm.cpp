
#include "GreedyAlgorithm.h"

GreedyAlgorithm::GreedyAlgorithm(TravelingSalesman& ts) {
    this -> ts = ts;
    city = 0;
    travelledDistance = 0.0;
}

GreedyAlgorithm::~GreedyAlgorithm() {

}

void GreedyAlgorithm::run() {
    double closestCity;
    int temp;
    int index = 0;
    vector<int> cities;
    int amount = ts.getAmount();

    cout << "Starting from city: " << city << endl;

    for (int i = 0; i < amount-1; i++) {
        closestCity = DBL_MAX;

        for (int j = 0; j < amount; j++) {
            double dist = ts.getDistances()[j][city];
            if ( dist != 0.0 && dist < closestCity ) {
                closestCity = dist;
                index = j;
            }
        }
        travelledDistance += closestCity;
        cities.push_back(index);

        for (int j = 0; j < amount; j++) {
            ts.setDistance(j, city, 0.0);
            ts.setDistance(city, j, 0.0);
        }

        temp = city;
        city = index;

        cout << "Shortest route from " << temp << " is to " << index << " (" << floor( closestCity * 100 ) / 100 << ")" << endl;
        cout << "Travelled distance: " << floor(travelledDistance * 100) / 100 << endl;
    }

    cout << "0 --> ";
    for( vector<int>::const_iterator i = cities.begin(); i != cities.end(); i++) {
        cout << *i << " --> ";
    }
    cout << "0" << endl;

    travelledDistance += ts.getDistanceFromStartCity(city);
    cout << "Travelled distance: " << floor(travelledDistance* 100) / 100 << endl;
}
