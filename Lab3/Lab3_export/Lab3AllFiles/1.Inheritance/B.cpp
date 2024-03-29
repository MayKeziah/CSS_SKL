/*
 *  B.cpp
 *  Inheritance Example
 *
 *  Created by Prof. Michael Stiber
 *  Modified by Yang Peng on 01/12/2018
 *
 */

#include "B.h"
#include <iostream>

using namespace std;

B::B()
{
  testDataB = 0;
  setN("unnamed B");
  cout << "Inside B::B() for object " << getN() << endl;
}

B::B(string name, int data1, int data2, int dataB) : A(name, data1, data2)
{
  cout << "Inside B::B(string) for object " << getN() << endl;
}


B::~B()
{
  cout << "Inside B::~B() for object " << getN() << endl;
}

