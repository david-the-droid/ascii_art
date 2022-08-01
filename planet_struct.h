#ifndef PLANET_STRUCT_H
#define PLANET_STRUCT_H
// func pointer

typedef void (*orbit_time_ptr)(void); 

struct planet_s{
    int dayLength;
    int currentSpeed;
    int objectSize;
    char atmosphereType;
    orbit_time_ptr orbitTimeFunc;  // function which can be overwritten
    // another function pointer -> draw planet
}; 

#endif