/* Template file to get started with, going with C programming for now */ 

#include <stdio.h>

#include "planet_factory.h"


int main() {

   planet_t earth_test;
   int myNum;

   printf("This is a planet factory, currently only prints previously defined planets\n");
   printf("Enter 1 to start the program to output earth and its relevant specifications\n");
   scanf("%d", &myNum);

   if (myNum == 1)
   {
      earth_test = getEarth();

      planet_draw(earth_test);
      
      planet_get_orbit_time(earth_test);

      planet_other_stats(earth_test);

      planet_destructor(earth_test);
   }
   else
   {
      printf("User chose not to run program\n");
   }
   printf("Program end\n");

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
   
   return 0;
}
