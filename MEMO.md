##Compilation avec flags
`gcc -Wall -Wextra -Werror -o nomDuBinaire main.c`

##Include & librairies
`#include<lib>` <br/>
maths = math.h

##Commentaires 
`// commentaires ligne`
```
/*
 commentaires bloc
*/
  ```
##Caractères "spéciaux"

| caractère | Meaning          | Exceptions       |
|---        |:---:             |---               |
|"%d"       | int              |
|"%ld"      | long             |
|"%f"       | float            |
|"%f"       | double           | avec scanf "%lf" |
|"%s"       | suite de char    |
| \n        | Retour chariot   |
| \t        | Tabulation       |
| \0        | Fin d'expression |

##RAM

| Adresse            | Valeur   |
|:---:               |:---:     |
| 0                  | 145      |
| 1                  | 33       |
| 3                  | 3901930  |
| ...                | ...      |
|dernière case de RAM| 940.5118 |

Chaque "case" mémoire stocke une (et une seule) valeur qui est un **_nombre_**. <br />
Chaque "case" mémoire est "représentée" par une adresse.

##Types
| Nom du type   | Minimum        | Maximum       | Attention      |
|---            |:---:           |:---:          | :---:          |
| signed char   | -127           | 127           | NA             | 
| unsigned char | 0              | 255           | Uniquement +   |
| int           | -32 767        | 32 767        | NA             |
| unsigned int  | 0              | 65 535        | Uniquement +   |
| long          | -2 147 483 648 | 2 147 483 647 | abs(min) > max |
| unsigned long | 0              | 4 294 967 295 | Uniquement +   |
| float         | -1x1037        | 1x1037        | NA             |
| double        | -1x1037        | 1x1037        | NA             |

##Division
```
double result;

result = 5/2; 
==> 2

result = 5.0/2.0; 
==> 2.500000
```

##Ressources :
 * [ASCII](https://fr.wikibooks.org/wiki/Les_ASCII_de_0_%C3%A0_127/La_table_ASCII)
 * [SWITCH](https://openclassrooms.com/fr/courses/19980-apprenez-a-programmer-en-c/14612-les-conditions#/id/r-2188321)