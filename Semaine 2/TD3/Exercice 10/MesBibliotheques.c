#include <stdio.h>

int saisieEntier (int borneInf, int borneSup)
{
    int nb ;
    printf("Veuillez saisir la note de l'eleve!") ;
    scanf ("%d", &nb) ;
    while ( (nb<borneInf) || (nb>borneSup) )
    {
        printf("Veuillez saisir la note de l'élève!") ;
        scanf ("%d", &nb) ;
    }
    return nb ;
}
