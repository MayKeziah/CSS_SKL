/*
 *  A.cpp
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 *
 */

#include "A.h"
#include <iostream>

using namespace std;

A::A()
{
    n = "unnamed A";
    testData1 = 0;
    testData2 = 0;
    cout << "Inside A::A() for object " << n << endl;
}

//A::A(string name) : n(name)
//{
//}


A::A(string name, int data1, int data2) : n(name), testData1(data1), testData2(data2){
    cout << "Inside A::A(string) for object " << n << endl;

}


A::~A()
{
    cout << "Inside A::~A() for object " << n << endl;
}

void A::setN(const char* s)
{
  n = s;
}

string A::getN(void) const
{
  return n;
}


