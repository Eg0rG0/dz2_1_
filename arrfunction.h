
#ifndef DZ2_ARRFUNCTION_H
#define DZ2_ARRFUNCTION_H
#include <algorithm>
#include <iterator>
#include <iostream>
#include <string>

using namespace std;

class Array {
public:
    int x;
    Array() {
        x = 0;
    }
    Array(int x) {
        this->x = x;
    }
    string Get() {
        return to_string(x);
    }
};

void(*select(int, Array*))(Array*, int);

int Arrsum(Array*, int);
void equalityfirst(Array*, int);
void morefirst(Array*, int);
void lessfirst(Array*, int);
#endif //DZ2_ARRFUNCTION_H
