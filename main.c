#include <stdio.h>
#include <stdlib.h>

/* scanf("format", &variable); */
/* printf("message", variable(s)) */

int main (int argc, char **argv[]) {

    int choice;
    char *burger1 = "Royal Cheese";
    char *burger2 = "Mc Deluxe";
    char *burger3 = "Mc Bacon";
    char *burger4 = "Big Mac";

   printf("\t===Menu===\n"
          "\t1. %s\n"
          "\t2. %s\n"
          "\t3. %s\n"
          "\t4. %s\n"
          "\tVotre choix ?\n", burger1, burger2, burger3, burger4);

   scanf("%d", &choice);

   switch (choice)
   {
       case 1:
           printf("\tTu as choisi un %s\n", burger1);
           break;
       case 2:
           printf("\tTu as choisi un %s\n", burger2);
           break;
       case 3:
           printf("\tTu as choisi un %s\n", burger3);
           break;
       case 4:
           printf("\tTu as choisi un %s\n", burger4);
           break;
       default :
           printf("\tJe n'ai pas compris la commande\n");
           break;
   }

    return 0;
}

//
// Created by le-trex on 06/04/2021.
//

