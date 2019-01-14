
#ifndef TRAVELINGSALEMAN_GREEDYALGORITHM_H
#define TRAVELINGSALEMAN_GREEDYALGORITHM_H

#include <iostream>
#include <stdlib.h>     /* For rand() */
#include <vector>       /* vectors */
#include <math.h>       /* For square root */
#include <cstdlib>
#include <float.h>

#include "TravelingSalesman.h"

using namespace std;

class GreedyAlgorithm {
public:
    GreedyAlgorithm(TravelingSalesman& ts);
    ~GreedyAlgorithm();
    void run();

private:
    TravelingSalesman ts;
    double travelledDistance;
    int city;

};


#endif //TRAVELINGSALEMAN_GREEDYALGORITHM_H
