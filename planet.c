
#include <stdlib.h>
#include "planet_struct.h"
#include "planet.h"

// memory allocator

planet_t* planet_new()
{
    return (planet_t*)(malloc(sizeof(planet_t)));
}

// memory constructor 

void planet_constructor(planet_t* planet)
{
    planet->dayLength = 0;
    planet->currentSpeed = 0;
    planet->objectMass = 0;
    planet->orbitTimeFunc = 0;
    planet->atmosphereType = (char*)(malloc(30 * sizeof(char)));
}
