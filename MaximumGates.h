#ifndef MAXIMUM_GATES_H
#define MAXIMUM_GATES_H
#include <algorithm>
#include <vector>
using std::vector;

// TODO: Your answer for question 2 goes here
int maximumGates(vector <int> arrives, vector <int> departs) {
    vector <int> arrivesAndDeparts;
    int numberOfGates = 0;
    int maxNumberOfGates = 0;
    for (int i = 0; i < arrives.size(); ++i) {
        arrivesAndDeparts.push_back(arrives.at(i));
    }
    for (int i = 0; i < departs.size(); ++i) {
        arrivesAndDeparts.push_back(departs.at(i));
    }
    std::sort( arrivesAndDeparts.begin(), arrivesAndDeparts.end() );
    for (int i = 0; i < arrivesAndDeparts.size(); ++i) {
        for (int i1 = 0; i1 < arrives.size(); ++i1) {
            if (arrivesAndDeparts.at(i) == arrives.at(i1)) { //its an arrive time
                numberOfGates++;
            } else if (arrivesAndDeparts.at(i) == departs.at(i1)) { //its a depart time
                numberOfGates--;
            }
        }
        if (numberOfGates > maxNumberOfGates) {
            maxNumberOfGates = numberOfGates;
        }
    }
    return maxNumberOfGates;
}
// Do not write any code below this line


#endif
