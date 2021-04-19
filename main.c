#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* scanf("format", &variable); */
/* printf("message", variable(s)) */

int main (int argc, char **argv[]) {

    const int MIN = 1;
    const int MAX = 100;

    int mysteryNumber;
    int chosenNumber;
    int numberOfTrials = 0;

    srand(time(NULL)); //permet l'utilisation de la fonction rand()

    mysteryNumber = (rand() % (MAX - MIN + 1)) + MIN;

    printf("\t## Bienvenue dans le jeu du nombre mystère ! ##\n");
    printf("\t## Quel est le nombre ? (entre 1 et 100) ##\n");

    do {
        numberOfTrials ++ ;
        scanf("%d", &chosenNumber);

        if ( chosenNumber < 1 || chosenNumber >100) {
            printf("\t## Le nombre %d n'est pas compris entre 1 et 100. Réessayez :)##\n", chosenNumber);
        } else if (chosenNumber > mysteryNumber) {
            printf("\t## Le nombre mystère est plus petit ! Réessayez :) ##\n");
        } else if (chosenNumber < mysteryNumber) {
            printf("\t## Le nombre mystère est plus grand ! Réessayez :) ##\n");
        } else if (chosenNumber == mysteryNumber) {
            printf("\t## BRAVO ! En %d coups, vous avez découvert le nombre mystère : %d ! ##\n", numberOfTrials, mysteryNumber);
        }
    } while (chosenNumber != mysteryNumber);

    return 0;
}

//
// Created by le-trex on 06/04/2021.
//

