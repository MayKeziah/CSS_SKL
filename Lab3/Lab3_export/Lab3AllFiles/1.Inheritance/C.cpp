/*
 *  C.cpp
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 *
 */

#include "C.h"
#include <iostream>

using namespace std;

C::C()
{
  testDataC = 0;
  setN("unnamed C");
  cout << "Inside C::C() for object " << getN() << endl;
}

C::C(string name, int data1, int data2, int dataB, double dataC) : B(name, data1, data2, dataB)
{
  cout << "Inside C::C(string) for object " << getN() << endl;
}


C::~C()
{
  cout << "Inside C::~C() for object " << getN() << endl;
}


