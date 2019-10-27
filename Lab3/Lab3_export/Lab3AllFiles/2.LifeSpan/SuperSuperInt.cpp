//
// Created by E on 10/16/2019.
//

#include "SuperSuperInt.h"
#include <iostream>
using namespace std;

SuperSuperInt::SuperSuperInt(int init, const char *name) : SuperInt(init, name) {

}

const int& SuperSuperInt::theValue() {
    return SuperInt::theValue();
}

SuperSuperInt::~SuperSuperInt() {
 cout << "Destroying a SuperSuperInt" << endl;
}
