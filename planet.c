
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

void planet_constructor(planet_t planet, int day_length, int current_speed, orbit_time_ptr fp_orbit_time, draw_ptr fp_draw) // additional arguments here
{
    planet->dayLength = day_length;
    planet->currentSpeed = current_speed;
    planet->atmosphereType = '\0';
    planet->orbitTimeFunc = fp_orbit_time;  // overwritable func pointer
    planet->drawFunc = fp_draw;
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

void planet_draw(planet_t planet)
{
    if (planet->drawFunc != NULL)
    {
        planet->drawFunc();
    }
}

void planet_other_stats(planet_t planet)
{
    printf("Earth current speed is %dm/s\n", planet->currentSpeed);
    printf("Earth day length is %dhrs\n", planet->dayLength);
}