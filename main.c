#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* scanf("format", &variable); */
/* printf("message", variable(s)) */

int main (int argc, char **argv[]) {

    const int MIN = 1;
    int max;

    int mysteryNumber;
    int chosenNumber;
    int numberOfTrials = 0;

    int level;
    int userChoice;

    _Bool tryAgain = 1;

    srand(time(NULL)); //permet l'utilisation de la fonction rand()

    printf("\t###################################################\n"
            "\t##   Bienvenue dans le jeu du nombre mystère !   ##\n");



    while (tryAgain != 0) {

        printf("\t###################################################\n"
                "\t##    Choisissez votre niveau de difficulté :    ##\n"
               "\t###################################################\n"
               "\t## 1 : Nombre mystère compris entre 1 et 100     ##\n"
               "\t## 2 : Nombre mystère compris entre 1 et 1000    ##\n"
               "\t## 3 : Nombre mystère compris entre 1 et 10 000  ##\n");

        do {
            printf("\t##  Saisissez le niveau choisi (entre 1 et 3) :  ##\n"
                   "\t###################################################\n");
            scanf("%d", &level);
        } while(level < 1 || level > 3 );

        if (level == 1) {
            max = 100;
        } else if (level == 2) {
            max = 1000;
        } else if (level == 3) {
            max = 10000;
        }

        mysteryNumber = (rand() % (max - MIN + 1)) + MIN;

        printf("\t##             Quel est le nombre ?              ##\n"
               "\t###################################################\n");

        do {
            numberOfTrials ++ ;
            scanf("%d", &chosenNumber);

            if ( chosenNumber < 1 || chosenNumber > max) {
                printf("\t## Le nombre  n'est pas compris entre 1 et 100.  ##\n"
                       "\t##                  Réessayez :)                 ##\n"
                       "\t###################################################\n");

            } else if (chosenNumber > mysteryNumber) {
                printf("\t##       Le nombre mystère est plus petit !      ##\n"
                       "\t##                  Réessayez :)                 ##\n"
                       "\t###################################################\n");

            } else if (chosenNumber < mysteryNumber) {
                printf("\t##       Le nombre mystère est plus grand !      ##\n"
                       "\t##                  Réessayez :)                 ##\n"
                       "\t###################################################\n");

            } else if (chosenNumber == mysteryNumber) {
                printf(
                       "\t##                    BRAVO !                    ##\n"
                       "\t##    Vous avez découvert le nombre mystère !    ##\n"
                       "\t##       Il vous a fallu %d coups                 ##\n"
                       "\t###################################################\n", numberOfTrials);

            }
        } while (chosenNumber != mysteryNumber);

        printf("\t##      Souhaitez vous refaire une partie ?      ##\n"
               "\t##                   1 : oui                     ##\n"
               "\t##        Autre touche que 1 : non               ##\n"
               "\t###################################################\n");

        scanf("%d", &userChoice);
        if ( userChoice == 1 ){
            tryAgain = 1;
        } else if ( userChoice != 1 ){
            tryAgain = 0;
        }
    }

    return 0;
}

//
// Created by le-trex on 06/04/2021.
//

