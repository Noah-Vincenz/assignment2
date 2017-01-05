#ifndef HOW_MANY_WAYS_TO_MAKE_H
#define HOW_MANY_WAYS_TO_MAKE_H
#include <vector>
using std::vector;

// TODO: Your answer for question 1a goes here
int howManyWaysToMake (int amountOfMoney, vector <int> coinSizesAvailable) {
    if (amountOfMoney == 0) {
        return 1;
    }
    if (amountOfMoney < 0) {
        return 0;
    }
    if (coinSizesAvailable.size() == 0) {
        return 0;
    }
    vector <int> newVector(amountOfMoney+1);
    newVector.at(0) = 1;
    for (int i = 0; i < coinSizesAvailable.size(); ++i) {
        for (int j = coinSizesAvailable.at(i); j <= amountOfMoney; ++j) {
            newVector.at(j) += newVector.at(j - coinSizesAvailable.at(i));
        }
    }
    return newVector.at(amountOfMoney);
}
// Do not write any code below this line

#endif
