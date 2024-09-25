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

int isSorted(int tab[], int taille)
{
    int i = 0;
    while (i < taille-1)
    {
        if (tab[i] >= tab[i+1])
        {
            return 0;
        }
        i++;
    }
    return 1;
}

int main()
{
    int T1[10];
    int T2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};

    initTableauRandom(T1, 10, 50);

    printf("T1: ");
    afficherTableau(T1, 10);

    printf("T2: ");
    afficherTableau(T2, 10);
    
    printf("T1 est-il trie? %s\n", isSorted(T1, 10)?"Oui":"Non");
    printf("T2 est-il trie? %s\n", isSorted(T2, 10)?"Oui":"Non");

    return 0;
}