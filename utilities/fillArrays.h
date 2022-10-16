//
// Created by arion on 12.10.2022.
//

#ifndef LAB2_FILLARRAYS_H
#define LAB2_FILLARRAYS_H

#include "thread"
#include "vector"
#include "play.h"

void fillArrays(std::vector<int> &winSum, std::vector<std::thread> &players, int playersAmount, int playAmount, double winChance) {
    for (int i = 0; i < playersAmount; ++i) winSum.push_back(0);

    for (int i = 0; i < playersAmount; ++i) {
        std::thread player(play, ref(winSum), i, playAmount, winChance);
        players.push_back(std::move(player));
    }
}


#endif //LAB2_FILLARRAYS_H
