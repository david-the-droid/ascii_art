#ifndef EARTH_H
#define EARTH_H

#include "earth_struct.h"

typedef struct earth_s *earth_t; // forward declaration

earth_t earth_new();
void earth_constructor(earth_t earth, int day_length, int current_speed);
void earth_destructor(earth_t earth);

// additional functionality
#endif