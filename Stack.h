#ifndef STACK_H
#define STACK_H

#include "vector.h"
#include <sstream>
#include <iterator>
using pep::vector;
using std::string;

// TODO: Your code for question 3 goes here
class Stack {
private:
    vector<double> stackVector;
public:
    bool const empty() {
        if (stackVector.size() == 0) {
            return true;
        }
        else {
            return false;
        }
    }
    double pop() {
        double d = stackVector.at(stackVector.size()-1);
        stackVector.pop_back();
        return d;
    }
    void push (double d) {
        stackVector.push_back(d);
    }
};
double evaluate(string s) {
    Stack stack;
    std::istringstream iStringStr(s);
    std::istream_iterator<string> begin(iStringStr), end;
    vector<string> tokensVector(begin, end);
    for (int i = 0; i < tokensVector.size(); ++i) {
        if (tokensVector.at(i) == "+") {
            double d1 = stack.pop();
            double d2 = stack.pop();
            stack.push(d2 + d1);
        }
        else if (tokensVector.at(i) == "-") {
            double d1 = stack.pop();
            double d2 = stack.pop();
            stack.push(d2 - d1);
        }
        else if (tokensVector.at(i) == "*") {
            double d1 = stack.pop();
            double d2 = stack.pop();
            stack.push(d2 * d1);
        }
        else if (tokensVector.at(i) == "/") {
            double d1 = stack.pop();
            double d2 = stack.pop();
            stack.push(d2 / d1);
        }
        else {
            stack.push(std::stod(tokensVector.at(i)));
        }
    }
    return stack.pop();
}
// Do not write anything below this line

#endif
