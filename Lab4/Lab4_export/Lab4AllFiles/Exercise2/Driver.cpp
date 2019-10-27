/*
 * Driver for simple int Square class.
 *
 * Author: Kelvin Sung
 * Date: Oct 2018
 */

#include <iostream>
#include "Square.cpp"

using namespace std;


/***************** My Template Functions *****************/

template <class ItemType>
void Swap(ItemType &i1, ItemType &i2) {
    ItemType t = i1;
    i1 = i2;
    i2 = t;
}

template <class ItemType>
void BubbleSort(ItemType *data, int size) {
    for (int i = 0; i < size; i++) {
        for (int j = 0; j < size - 1 - i; j++) {

            if (data[j + 1] < data[j])
                Swap(data[j], data[j + 1]);
        }
    }
}

template <class ItemType>
void print(const string& msg, ItemType* data, int size) {
    cout << msg << endl;
    cout << "\t[";
    for (int i = 0; i < size - 1; i++) {
        cout <<  data[i] << ", ";
    }
    cout << data[size - 1] << "]" << endl;
}


/***************** Original Functions *****************/

//void MySwap(Square &s1, Square &s2) {
//    Square t = s1;
//    s1 = s2;
//    s2 = t;
//}
//
//void MyBubbleSort(Square *data, int size) {
//    for (int i = 0; i<size; i++) {
//        for (int j = 0; j<size-1-i; j++) {
//            if (data[j] < data[j+1])
//                MySwap(data[j], data[j+1]);
//        }
//    }
//}
//
//void printArray(string msg, Square *data, int size) {
//    cout << msg << endl;
//    for (int i = 0; i<size; i++) {
//        cout <<  data[i] << " ";
//    }
//    cout << endl;
//}


int main(int argc, char** argv)
{
//    Square s1, s2;
//
//    s1.setSize(5);
//    s2.setSize(3);
//
//    cout << "S1 is: " << s1 << endl;
//    cout << "S2 is: " << s2 << endl;
//
//    if (s1 < s2)
//        cout << "s1 is smaller" << endl;
//    else
//        cout << "s2 is smaller" << endl;
//
//    s1 = s2;
//    cout << "after assignment" << endl;
//    cout << "s1 is:" << s1 << endl;
//    cout << "s2 is:" << s2 << endl;
    
    // do bubble sort
//    int  num[10] = {10, 9, 8, 1, 0, 7, 20, 14, 2, 4};
//    Square sArray[10];  // call initialize by default constructors
//    for (int i = 0; i < 10; i++) {
//        sArray[i].setSize(num[i]);
//    }
//    printArray("Array before sorting:", sArray, 10);
//    MyBubbleSort(sArray, 10);
//    printArray("Array after sorting:", sArray, 10);


    cout << "\n\n------------ Template Testing Starts Here ------------\n" << endl;
    int  sizes[10] = {10, 9, 8, 1, 0, 7, 20, 14, 2, 4};

    cout << "Testing Char: "<< endl;
    auto* test = new Square<char>[10];
    char letter = 'A';
    for (int j = 0; j < 10; j++){
        test[j].setData(letter + sizes[j]);
    }
    print("\tArray before template sorting:", test, 10);
    BubbleSort(test, 10);
    print("\tArray after template sorting:", test, 10);


    cout << "\nTesting String: "<< endl;
    auto* test1 = new Square<string>[10];
    string s[10] = {"r", "a", "k", "b", "e", "c", "d", "f", "l", "g"};
    for (int j = 0; j < 10; j++){
        test1[j].setData(s[j]);
    }
    print("\tArray before template sorting:", test1, 10);
    BubbleSort(test1, 10);
    print("\tArray after template sorting:", test1, 10);


    delete[] test;
    test = nullptr;
    delete[] test1;
    test1 = nullptr;
}
