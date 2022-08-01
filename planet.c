
#include <stdlib.h>
#include <stdio.h>

#include "planet_struct.h"
#include "planet.h"

// memory allocator

planet_t planet_new()
{
    return (planet_t)(malloc(sizeof(planet_t)));
}

// memory constructor 

void planet_constructor(planet_t planet, orbit_time_ptr fp_orbit_time ) // additional arguments here
{
    planet->dayLength = 0;
    planet->currentSpeed = 0;
    planet->objectSize = 0;
    planet->atmosphereType = '\0';
    planet->orbitTimeFunc = fp_orbit_time;  // overwritable func pointer
}

// memory deconstructor

void planet_destructor(planet_t planet)
{
    if (planet != NULL)
    {
        free(planet);
    }
    //free(planet);
}

void planet_get_orbit_time(planet_t planet)
{
    if (planet->orbitTimeFunc != NULL)
    {
        planet->orbitTimeFunc();
    }
}