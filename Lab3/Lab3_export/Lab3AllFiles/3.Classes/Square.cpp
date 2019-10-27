/*
 *  Square.cpp
 *  Class-example
 *
 */

#include "Square.h"

void Square::setSize(int newSize)
{
   theSize = newSize;
}


int Square::getSize(void) const
{
   return theSize;
}

Square& Square::operator= (const Square& other)
{
	theSize = other.getSize();
	return *this;
}

//This is not required because the compiler knows
// how to make a square out of an int.
Square& Square::operator= (int size)
{
    theSize = size;
    return *this;
}

bool Square::operator<(const Square& other) {
    return this->theSize < other.theSize;
}

ostream& operator<<(ostream &Out, const Square& Sq) {
    Out << "[" << Sq.theSize << "]";
    return Out;
}
