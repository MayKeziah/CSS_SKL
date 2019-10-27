//
// Created by E on 10/18/2019.
//

#include "MySubClass.h"

MySubClass::MySubClass(int data) : MyClass(), subClassData(data) {}

MySubClass::MySubClass(const MySubClass &toCopy) :
    MyClass(toCopy), subClassData(toCopy.subClassData){}

int MySubClass::getSubClassData() {
    return subClassData;
}

void MySubClass::setSubClassData(int data) {
    subClassData = data;
}



