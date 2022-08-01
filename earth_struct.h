#ifndef EARTH_STRUCT_H
#define EARTH_STRUCT_H


#include "planet.h"

struct earth_s{
    planet_t planet;  // because this is the first memory address of the struct we can state
                      // "earth_s is of type "planet_t" because it sits at the first mem address of the struct"
};

#endif