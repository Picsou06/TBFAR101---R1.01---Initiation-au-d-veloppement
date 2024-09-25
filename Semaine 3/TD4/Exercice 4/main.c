#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void initTableauRandom(int tab[], int taille, int valMax)
{
    int i;
    srand (time(NULL));
    for (i = 0; i < taille; i++)
    {
        tab[i] = rand() % (valMax+1);
    }
}

int main()
{
    int taille = 20;
    int tab[taille];
    initTableauRandom(tab, taille, 50);
    //TODO afficher le tableau d'int
    printf("Tableau : ");
    for (int i = 0; i < taille; i++)
    {
        printf("%d ", tab[i]);
    }
    printf("\n");
    return 0;
}