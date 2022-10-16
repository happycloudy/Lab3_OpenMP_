#include "vector"
#include <omp.h>
#include "utilities/fillArrays.h"
#include "utilities/printResult.h"
#include "utilities/play.h"

using namespace std;

int const playAmount = 10000;
int const playersAmount = 4;
double const winChance = 0.1;


int main() {
    vector<int> winSum;

    fillArrays(winSum, playersAmount);

    omp_set_num_threads(playersAmount);

    #pragma omp parallel default(none) shared(winSum, winChance)
    play(winSum, omp_get_thread_num(), playAmount, winChance);

    printResult(winSum, playersAmount);
    return 0;
}
