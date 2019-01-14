#include <iostream>
#include "City.h"
#include "TravelingSalesman.h"
#include "GreedyAlgorithm.h"

int main() {
    TravelingSalesman ts(10);
    GreedyAlgorithm ga(ts);
    ga.run();
    return 0;
}