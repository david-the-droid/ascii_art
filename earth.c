#include <stdlib.h>
#include <stdio.h>
#include "earth.h"
#include "planet.h"
#include "earth_struct.h"

static void earth_draw(void);

earth_t earth_new() // earth_t is actual pointer to struct (its starting mem location) 
{
     return (earth_t)(malloc(sizeof(struct earth_s)));
}

// memory constructure

static void earth_draw(void) // private to the file
{
    printf("      Earth: \n\n");

    printf("         _____   \n");
    printf("     ,-:` \\;',`'-, \n");
    printf("   .'-;_,;  ':-;_,'. \n");
    printf("  /;   '/    ,  _`.-\\ \n");
    printf(" | '`. (`     /` ` \\`| \n");
    printf(" |:.  `\\`-.   \\_   / | \n");
    printf(" |     (   `,  .`\\ ;'| \n");
    printf("  \\     | .'     `-'/ \n");
    printf("   `.   ;/        .'   \n");
    printf("     `'-._____. ' \n");

    printf("\n\n");
}

static void earth_orbit_time(void)
{
    printf("Earth orbit time is 1 year - 365days\n");
}

void earth_constructor(earth_t earth, int day_length, int current_speed)
{
    planet_constructor((planet_t)earth, day_length, current_speed, earth_orbit_time, earth_draw);  // & must be included as the "->" derefences the memory its pointing to, so the address of that must be provided
}
// memory destructor

void earth_destructor(earth_t earth)
{
    planet_destructor((planet_t)earth);
}
