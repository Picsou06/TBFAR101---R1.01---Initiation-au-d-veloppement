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

int countValue(int tab[], int taille, int val)
{
    int i;
    int count = 0;
    for (i = 0; i < taille; i++)
    {
        if (tab[i] == val)
        {
            count++;
        }
    }
    return count;
}

int main()
{
    int T1[10];
    int T2[10] = {1, 2, 0, 4, 5, 1, 7, 8, 8, 10};
    int val;
    assert(countValue(T2, 10, 1)==2);
    assert(countValue(T2, 10, 10)==1);
    assert(countValue(T2, 10, 8)==2);
    assert(countValue(T2, 10, -8)==-0);

    initTableauRandom(T1, 10, 50);

    printf("T1: ");
    afficherTableau(T1, 10);

    printf("T2: ");
    afficherTableau(T2, 10);
    
    printf("Quel valeurs souhaitez vous rechercher?\n");
    scanf("%d", &val);
    printf("La valeur %d est dans le tableau T1 %d fois\n", val, countValue(T1, 10, val));

    return 0;
}