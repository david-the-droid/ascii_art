#include "planet_factory.h"
#include "earth.h"


planet_t getEarth(void)
{
    earth_t earth_1;
    earth_1 = earth_new();                       // create new earth
    earth_constructor(earth_1, 24, 460);         // construct new earth with values
    return (planet_t)earth_1;                    // return a planet type memory address
}
