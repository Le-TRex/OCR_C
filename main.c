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

    int userChoice;
    _Bool tryAgain = 1;

    srand(time(NULL)); //permet l'utilisation de la fonction rand()

    printf("\t## Bienvenue dans le jeu du nombre mystère ! ##\n");

    while (tryAgain != 0) {
        mysteryNumber = (rand() % (MAX - MIN + 1)) + MIN;

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

        printf("\t## Souhaitez vous refaire une partie ? ##\n"
               "\t## 1 : oui ##\n"
               "\t## 0 : non ##\n");

        scanf("%d", &userChoice);
        if (userChoice < 0 || userChoice > 1){
            printf("\t## la réponse n'était ni 0 ni 1, veuillez rééssayer :) ##");
        } else if (userChoice == 0){
            tryAgain = 0;
        }
    }


    return 0;
}

//
// Created by le-trex on 06/04/2021.
//

