#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void my_putchar(char *c);
int loot(void) {
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
           my_putchar("Orc\n");
        }
        else {
           my_putchar("Troll\n");
      }
      }
      else if (number > 49 && number <= 79) {
        int number =  rand() % 2;
        if (number == 0) {
           printf("Goblin\n");
        }
        else {
           printf("Pokeball\n");
      }
      }
      else if (number >79 && number <= 94) {
        int number =  rand() % 2;
        if (number == 0) {
           printf("Goblin\n");
        }
        else {
         printf("Potion\n");
        }
      }
      else if (number >94 && number <= 98) {
        int number =  rand() % 2;
        if (number == 0) {
           printf("Goblin\n");
        }
        else {
         printf("Skeleton\n");
        }
      }
      else if (number >98 && number == 99) {
        int number =  rand() % 2;
        if (number == 0) {
           printf("Goblin\n");
        }
        else {
         printf("Zombie\n");
        }
      }
return 0;

   }
return 0;

}
