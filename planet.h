#ifndef PLANET_H
#define PLANET_H
#include "planet_struct.h"

typedef struct planet_s *planet_t; // forward declaration

planet_t planet_new(); 
void planet_constructor(planet_t planet, int day_length, int current_speed, orbit_time_ptr fp_orbit_time, draw_ptr fp_draw);
void planet_destructor(planet_t planet);
void planet_get_orbit_time(planet_t planet);
void planet_draw(planet_t planet);
void planet_other_stats(planet_t planet);

#endif