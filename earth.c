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

void earth_constructor(earth_t earth)
{
    planet_constructor((planet_t)earth, earth_draw);  // & must be included as the "->" derefences the memory its pointing to, so the address of that must be provided
    //earth->planet.currentSpeed = 67000; // mph
    //earth->planet.dayLength = 24; // hrs
    //earth->planet.objectSize = 0;
    //earth->planet.orbitTimeFunc = draw;
}
// memory destructor

void earth_destructor(earth_t earth)
{
    planet_destructor((planet_t)earth);
}
