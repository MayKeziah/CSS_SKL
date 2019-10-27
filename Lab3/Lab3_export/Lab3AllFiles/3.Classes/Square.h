/*
 *  Square.h
 *  Class-example
 *
 */

#ifndef SQUARE_H
#define SQUARE_H

#include <iostream>
using namespace std;

class Square {
    friend ostream& operator<<(ostream& Out, const Square&);
public:
   void setSize(int newSize);
   int getSize(void) const;
   Square& operator= (const Square&);
   Square& operator= (int);
   bool operator< (const Square&);

private:
   int theSize;
   
};

#endif
