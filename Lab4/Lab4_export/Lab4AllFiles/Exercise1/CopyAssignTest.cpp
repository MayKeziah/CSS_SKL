/*
 * CopyAssignTest
 
 * Created by Michael Stiber
 * Modified by Yang Peng on 01/15/2018
 */


#include <iostream>
#include "MyClass.h"
#include "MySubClass.h"

using namespace std;

int main()
{
	// create object m1 using default constructor
    MyClass m1;
	// update data members
    m1.setD(3.14159);
    m1.setI(42);
    m1.setS("This is a test");
    m1.setIp(7);

    cout << "m1 values:" << endl;
    cout << '\t' << m1.getD() << ", " << m1.getI() << ", " << m1.getS() 
         << ", " << m1.getIp() << endl;

	// create object m2 from m1 using copy constructor
    MyClass m2(m1);
    cout << "m2 values:" << endl;
    cout << '\t' << m2.getD() << ", " << m2.getI() << ", " << m2.getS() 
         << ", " << m2.getIp() << endl;

	// create object m3 from m1 using assignment operator
	MyClass m3 = m1;
    cout << "m3 values:" << endl;
    cout << '\t' << m3.getD() << ", " << m3.getI() << ", " << m3.getS() 
         << ", " << m3.getIp() << endl;

	// update m2's data
    m2.setD(1.7172);
    m2.setI(100);
    m2.setS("This is a NEW test");
    m2.setIp(8);
	// copy m2 to m1
    m1 = m2;
    cout << "m1 values:" << endl;
    cout << '\t' << m1.getD() << ", " << m1.getI() << ", " << m1.getS() 
         << ", " << m1.getIp() << endl;
	// only update m2's data IP which is using dynamically allocated memory
    m2.setIp(23);
    cout << "m1 values:" << endl;
    cout << '\t' << m1.getD() << ", " << m1.getI() << ", " << m1.getS() 
         << ", " << m1.getIp() << endl;
    cout << "m2 values; last should be different:" << endl;
    cout << '\t' << m2.getD() << ", " << m2.getI() << ", " << m2.getS() 
         << ", " << m2.getIp() << endl;

    // Testing MySubClass
    MySubClass test1(12);
    test1.setS("Test1");
    test1.setD(2.3456);
    test1.setI(9);
    test1.setIp(31);

    cout << "Test1 values:" << endl;
    cout << '\t' << test1.getD() << ", " << test1.getI() << ", " << test1.getS()
         << ", " << test1.getIp() << ", " << test1.getSubClassData() << endl;

    MySubClass test2(test1);

    cout << "Test2 values: (should be the same as test1) " << endl;
    cout << '\t' << test2.getD() << ", " << test2.getI() << ", " << test2.getS()
         << ", " << test2.getIp() << ", " << test2.getSubClassData() << endl;

    MySubClass test3;
    test3.setSubClassData(1);
    test3.setS("Test3");
    test3.setD(3.4);
    test3.setI(5);
    test3.setIp(6);

    cout << "Test3 values: " << endl;
    cout << '\t' << test3.getD() << ", " << test3.getI() << ", " << test3.getS()
         << ", " << test3.getIp() << ", " << test3.getSubClassData() << endl;

    test2 = test3;

    cout << "Test2 values: (should be the same as test3) " << endl;
    cout << '\t' << test2.getD() << ", " << test2.getI() << ", " << test2.getS()
         << ", " << test2.getIp() << ", " << test2.getSubClassData() << endl;

    return 0;
}
