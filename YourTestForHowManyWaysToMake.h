#ifndef YOUR_TEST_FOR_HOW_MANY_WAYS_TO_MAKE_H
#define YOUR_TEST_FOR_HOW_MANY_WAYS_TO_MAKE_H

#include "HowManyWaysToMake.h"
#include <vector>
using std::vector;

int testHowManyWaysToMake() {
    vector <int> myVector1{1,4,6,7};
    if (howManyWaysToMake(10, myVector1) == 6 && howManyWaysToMake(0, myVector1) == 1) {
        return 0;
    }
    else {
        return 1;
    }
}
// Do not write any code below this line

#endif
