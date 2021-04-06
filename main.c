#include <stdio.h>
#include <stdlib.h>

int main (int argc, char **argv[]) {

    char symbole;
    int operande1;
    int operande2;
    int resultat;
    int reste;

    printf("\tTapez le symbole dorrespondant à l'opération que vous souhaitez réaliser : \n"
          "+ : addition\n"
          "- : sousctraction\n"
          "* : multiplication\n"
          "/ : division\n");

    scanf("%c", &symbole);

    printf("\tSaisissez le premier nombre (entier) de l'opération : \n");

    scanf("%d", &operande1);

    printf("\tSaisissez le deuxième nombre (entier) de l'opération : \n");

    scanf("%d", &operande2);

    /*
     * ascii + ==> 43
     * ascii - ==> 45
     * ascii * ==> 42
     * ascii / ==> 47
     * */

    if (symbole == 43) {
        resultat = operande1 + operande2;
        printf("\t%d %c %d = %d \n", operande1, symbole, operande2, resultat);
    }else if (symbole == 45) {
        resultat = operande1 - operande2;
        printf("\t%d %c %d = %d \n", operande1, symbole, operande2, resultat);
    }else if (symbole == 42) {
        resultat = operande1 * operande2;
        printf("\t%d %c %d = %d \n", operande1, symbole, operande2, resultat);
    }else if (symbole == 47) {
        resultat = operande1 / operande2;
        reste = operande1 % operande2;
        printf("\t%d %c %d = %d, reste %d \n", operande1, symbole, operande2, resultat, reste);
    }else{
        printf("\tLe symbole choisi ne correspond à aucune des opérations possibles.");
        return 0;
    }


    return 0;
}

//
// Created by le-trex on 06/04/2021.
//

