//
// Created by E on 10/18/2019.
//

#ifndef EXERCISE1_MYSUBCLASS_H
#define EXERCISE1_MYSUBCLASS_H
#include "MyClass.h"


class MySubClass : public MyClass {
private:
    int subClassData;

public:
    explicit MySubClass(int data = 0);
    MySubClass(const MySubClass& toCopy);
    virtual ~MySubClass() = default;

    int getSubClassData();
    void setSubClassData(int data);
};


#endif //EXERCISE1_MYSUBCLASS_H
