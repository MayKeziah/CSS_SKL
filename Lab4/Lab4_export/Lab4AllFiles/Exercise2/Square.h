/*
 *  Square.h
 *  Class-example
 *
 */

#ifndef SQUARE_H
#define SQUARE_H
template <class SquareType> class Square;
template <class SquareType> std::ostream& operator<<(std::ostream&, const Square<SquareType>& c);

template <class SquareType>
class Square {
    friend std::ostream& operator<< <> (std::ostream&, const Square<SquareType>& c);
public:
	Square<SquareType>& operator=(const Square<SquareType>&);
	bool operator<(const Square<SquareType>&);
//	void setSize(int newSize);
//	int getSize(void) const;
	void setData(const SquareType& newData );
	SquareType getData() const;

private:
//	int theSize;
	SquareType data;
};

#endif
