#ifndef PLANET_STRUCT_H
#define PLANET_STRUCT_H
// func pointer

typedef void (*orbit_time_ptr)(void); 
typedef void (*draw_ptr)(void);

struct planet_s{
    int dayLength;
    int currentSpeed;
    char atmosphereType;
    orbit_time_ptr orbitTimeFunc;  // function ptr which can be overwritten
    draw_ptr drawFunc; 
}; 

#endif