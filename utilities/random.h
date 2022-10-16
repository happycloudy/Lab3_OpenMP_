//
// Created by arion on 12.10.2022.
//

#ifndef LAB2_RANDOM_H
#define LAB2_RANDOM_H

#include <random>

double random() {
    std::random_device rd;
    std::mt19937 gen(rd());
    std::uniform_real_distribution<> distribution(0,1);
    return distribution(gen);
}

#endif //LAB2_RANDOM_H
