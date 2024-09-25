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

int minimumValue(int tab[], int taille)
{
    int i;
    int mini = 0;
    for (i = 0; i < taille; i++)
    {
        if (tab[i] < tab[mini])
        {
            mini = i;
        }
    }
    return mini;
}

int main()
{
    int T1[10];
    int T2[10] = {1, 2, 0, 4, 5, 1, 7, 8, 8, 10};
    int T3[10] = {-1, 2, 0, 4, 5, 1, 7, 8, 8, 10};
    int T4[10] = {1, 2, 0, 4, 5, 1, 7, 8, 8, -10};
    int val;
    assert(minimumValue(T2, 10)==2);
    assert(minimumValue(T3, 10)==0);
    assert(minimumValue(T4, 10)==9);

    initTableauRandom(T1, 10, 50);

    printf("T1: ");
    afficherTableau(T1, 10);
    
    printf("La valeur minimal du tableau T1 est à l'emplacement %d\n", minimumValue(T1, 10));

    return 0;
}