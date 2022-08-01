#ifndef PLANET_H
#define PLANET_H
#include "planet_struct.h"

typedef struct planet_s *planet_t; // forward declaration

planet_t planet_new(); 
void planet_constructor(planet_t planet, orbit_time_ptr fp_orbit_time);
void planet_destructor(planet_t planet);
void planet_get_orbit_time(planet_t planet);

#endif