//
// Created by E on 10/16/2019.
//

#ifndef INC_2_LIFESPAN_SUPERSUPERINT_H
#define INC_2_LIFESPAN_SUPERSUPERINT_H
#include "SuperInt.h"

class SuperSuperInt : public SuperInt{
public:
    SuperSuperInt(int init, const char *name);
    ~SuperSuperInt();

    const int& theValue();
};


#endif //INC_2_LIFESPAN_SUPERSUPERINT_H
