#include "main_header.h"
#include <time.h>
#include <stdlib.h>
#include "rpg.h"
#include "Item.h"


void my_loot(void) {
   int i;
   int n= 1;
   time_t t;

   /* Intializes random number generator */
   srand((unsigned) time(&t));

   /* Print 1 random numbers from 0 to 7 */
   for( i = 0 ; i < n ; i++ ) {
      int number =  rand() % 100;
      if (number >= 0 && number <= 49) {
        int number =  rand() % 2;
        if (number == 0) {
           my_putstr(item -> name);
        }
        else {
           my_putstr("Troll\n");
      }
      }
      else if (number > 49 && number <= 79) {
        int number =  rand() % 2;
        if (number == 0) {
           my_putstr("Goblin\n");
        }
        else {
           my_putstr("Pokeball\n");
      }
      }
      else if (number >79 && number <= 94) {
        int number =  rand() % 2;
        if (number == 0) {
           my_putstr("Cigarette\n");
        }
        else {
         my_putstr("Broken Umbrella\n");
        }
      }
      else if (number >94 && number <= 98) {
        int number =  rand() % 2;
        if (number == 0) {
           my_putstr("Code line\n");
        }
        else {
         my_putstr("Coffee\n");
        }
      }
      else if (number >98 && number == 99) {
        int number =  rand() % 2;
        if (number == 0) {
           my_putstr("Golden Duck\n");
        }
        else {
         my_putstr("Flo's electric scooter\n");
        }
      }

   }


}
