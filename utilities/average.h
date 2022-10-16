//
// Created by arion on 12.10.2022.
//

#ifndef LAB2_AVERAGE_H
#define LAB2_AVERAGE_H

#include "vector"

double average(std::vector<int> &winSum) {
    int sum = 0;

    for (int playerSum: winSum) {
        sum += playerSum;
    }

    return sum / (double)winSum.size();
}


#endif //LAB2_AVERAGE_H
