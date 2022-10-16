//
// Created by arion on 12.10.2022.
//

#ifndef LAB2_PRINTRESULT_H
#define LAB2_PRINTRESULT_H

#include <iostream>
#include "average.h"

void printResult(std::vector<int> &winSum, int playersAmount) {
    for (int i = 0; i < playersAmount; ++i) {
        std::cout << "Player" << i + 1 << "\t";
    }

    std::cout << std::endl;

    for (int i = 0; i < playersAmount; ++i) {
        std::cout << winSum[i] << "\t";
    }

    std::cout << std::endl << std::endl << "Win average = " << average(winSum);
}

#endif //LAB2_PRINTRESULT_H
