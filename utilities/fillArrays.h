//
// Created by arion on 12.10.2022.
//

#ifndef LAB2_FILLARRAYS_H
#define LAB2_FILLARRAYS_H

#include "vector"


void fillArrays(std::vector<int> &winSum, int playersAmount) {
    for (int i = 0; i < playersAmount; ++i) winSum.push_back(0);
}


#endif //LAB2_FILLARRAYS_H
