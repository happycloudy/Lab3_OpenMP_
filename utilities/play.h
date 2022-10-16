//
// Created by arion on 12.10.2022.
//

#ifndef LAB2_PLAY_H
#define LAB2_PLAY_H

#include "vector"
#include "random.h"

void play(std::vector<int> &winSum, int winSumPos, int playAmount, double winChance) {
    for (int i = 0; i < playAmount; ++i) {
        if (random() <= winChance) {
            winSum[winSumPos] += 1;
        }
    }
}

#endif //LAB2_PLAY_H
