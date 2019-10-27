/*
 *  Square.cpp
 *  Class-example
 *
 *  edited as requested by Keziah May
 *
 */

#include <iostream>
#include "Square.h"

using namespace std;

//template <class SquareType>
//void Square<SquareType>::setSize(int newSize)
//{
//	theSize = newSize;
//}
//
//template <class SquareType>
//int Square<SquareType>::getSize(void) const
//{
//	return theSize;
//}

//updated
template <class SquareType>
Square<SquareType>& Square<SquareType>::operator=(const Square<SquareType>& other)
{
//	theSize = other.getSize();
	data = other.getData();
	return *this;
}

template <class SquareType>
ostream& operator<<(ostream &os, const Square<SquareType> & c)
{
	os << c.getData();
	return os;
}

template <class SquareType>
bool Square<SquareType>::operator<(const Square<SquareType>& other)
{
//	return theSize < other.getSize();
    return data < other.getData();
}

template<class SquareType>
void Square<SquareType>::setData(const SquareType& newData) {
    data = newData;
}

template<class SquareType>
SquareType Square<SquareType>::getData() const {
    return data;
}
