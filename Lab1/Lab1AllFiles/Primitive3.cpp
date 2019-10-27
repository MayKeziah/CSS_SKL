//
// Created by E on 9/30/2019.
//
#include <iostream>
#include <cassert>

int myRoundingFunction(double input);
int roundLastNum(int output);

int main(){
    std::cout << myRoundingFunction(23.446) << " Expected: 23" << std::endl;
    assert(myRoundingFunction(23.446) == 23);

    std::cout << myRoundingFunction(23.456) << " Expected: 24" << std::endl;
    assert(myRoundingFunction(23.456) == 24);

    std::cout << myRoundingFunction(23.546) << " Expected: 24" << std::endl;
    assert(myRoundingFunction(23.546) == 24);

    std::cout << myRoundingFunction(0.546) << " Expected: 1" << std::endl;
    assert(myRoundingFunction(0.546) == 1);

    std::cout << myRoundingFunction(0.046) << " Expected: 0" << std::endl;
    assert(myRoundingFunction(0.046) == 0);



    std::cout << myRoundingFunction(-23.446) << " Expected: -23" << std::endl;
    assert(myRoundingFunction(-23.446) == -23);

    std::cout << myRoundingFunction(-23.456) << " Expected: -24" << std::endl;
    assert(myRoundingFunction(-23.456) == -24);

    std::cout << myRoundingFunction(-23.546) << " Expected: -24" << std::endl;
    assert(myRoundingFunction(-23.546) == -24);

    std::cout << myRoundingFunction(-0.546) << " Expected: -1" << std::endl;
    assert(myRoundingFunction(-0.546) == -1);

    std::cout << "all tests passed successfully" << std::endl;




    return 0;
}

int myRoundingFunction(double input){
    //Truncated double only keeping the first two decimal values.
    int output = (int)(input * 100);

    output = roundLastNum(output);
    output = roundLastNum(output);

    return output;
}

int roundLastNum(int output){
    //If the 100ths place is + or -5 or greater, round accordingly
    if((output % 10) >= 5) {
        output += 10;
    }else if((output % 10) <= -5){
        output -= 10;
    }

    //divide by 10, truncating the decimal value
    output /= 10;

    return output;
}