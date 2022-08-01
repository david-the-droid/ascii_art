/* Template file to get started with, going with C programming for now */ 

#include <stdio.h>

#include "planet_factory.h"



int main() {

   planet_t earth_test;

   earth_test = getEarth();
   
   planet_get_orbit_time(earth_test);

   planet_destructor(earth_test);



   //
   // printf() displays the string inside quotation

   /*
    printf(" \n\n     Saturn:\n\n");

    printf("         ,MMM8&&&. \n");
    printf("    _...MMMMM88&&&&..._ \n");
    printf(" .::'''MMMMM88&&&&&&'''::. \n");
    printf(" ::    MMMMM88&&&&&&    ::\n");
    printf("'::....MMMMM88&&&&&&....::'\n ");
    printf("  `''''MMMMM88&&&&''''`   \n");
    printf("         'MMM8&&&'  \n");

    printf("\n\n");
   */
   //earth->base_struct.function_pointer() 
   //saturn->base_struct.function_pointer
   
   return 0;
}
