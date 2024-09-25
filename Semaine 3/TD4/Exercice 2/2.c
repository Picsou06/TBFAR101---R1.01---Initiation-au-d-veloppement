#include <stdio.h>
#include <string.h>

int saisieEntier (int borneInf, int borneSup)
{
    int nb ;
    printf("Veuillez saisir un nombre entre %d et %d\n", borneInf, borneSup) ;
    scanf ("%d", &nb) ;
    while ( (nb<borneInf) || (nb>borneSup) )
    {
        printf("Veuillez saisir un nombre entre %d et %d\n", borneInf, borneSup) ;
        scanf ("%d", &nb) ;
    }
    return nb ;
}

int main()
{
    float tab[5];
    float total = 0;
    for (int i = 0; i < sizeof(tab)/sizeof(int); i++)
    {
        tab[i] = saisieEntier(-10, 10);
    }
    for (int i = 0; i < sizeof(tab)/sizeof(int); i++)
    {
        total += tab[i];
    }
    printf("La somme des éléments du tableau est : %f\n", total);
}