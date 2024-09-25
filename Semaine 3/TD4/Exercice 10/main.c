#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

void initTableauRandom(int tab[], int taille, int valMax)
{
    int i;
    srand (time(NULL));
    for (i = 0; i < taille; i++)
    {
        tab[i] = rand() % (valMax+1);
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

float averageValue(int tab[], int taille)
{
    int i;
    int average = 0;
    for (i = 0; i < taille; i++)
    {
            average += tab[i];
    }
    return (float) average/taille;
}

int main()
{
    int T1[10];

    initTableauRandom(T1, 10, 50);

    printf("T1: ");
    afficherTableau(T1, 10);
    
    printf("La moyenne du tableau T1 est %f\n", averageValue(T1, 10));

    return 0;
}