#include <stdio.h>

int getSign(int a, int b) {
    if ((a < 0 && b > 0) || (a > 0 && b < 0)) {
        return -1;
    } else if (a == 0 || b == 0) {
        return 0;
    } else {
        return 1;
    }
}

int saisieEntier (int borneInf, int borneSup)
{
    int nb ;
    printf("Veuillez saisir un entier compris entre %d et %d\n", borneInf, borneSup) ;
    scanf ("%d", &nb) ;
    while ( (nb<borneInf) || (nb>borneSup) )
    {
        printf("Veuillez saisir un entier compris entre %d et %d\n", borneInf, borneSup) ;
        scanf ("%d", &nb) ;
    }
    return nb ;
}