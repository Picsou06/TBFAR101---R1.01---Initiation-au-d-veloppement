#include "TD8.h"

void saisirTableau(int *t, int taille) {
    srand(time(NULL));
    for (int i = 0; i < taille; i++) {
        t[i] = (rand() % 201) - 100;
    }
}

void afficherTableau(int tab[], int taille)
{
    int i;
    for (i = 0; i < taille; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
}

int saisieEntier (int borneInf, int borneSup)
{
    int nb ;
    printf("Veuillez saisir l'entier!") ;
    scanf ("%d", &nb) ;
    while ( (nb<borneInf) || (nb>borneSup) )
    {
        printf("Veuillez saisir un entier valide!") ;
        scanf ("%d", &nb) ;
    }
    return nb ;
}