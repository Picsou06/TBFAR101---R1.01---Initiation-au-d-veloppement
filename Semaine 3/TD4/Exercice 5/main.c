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

int findValue(int tab[], int taille, int val)
{
    int i;
    for (i = 0; i < taille; i++)
    {
        if (tab[i] == val)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int T1[10];
    int T2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int val;
    assert(findValue(T2, 10, 1)==0);
    assert(findValue(T2, 10, 10)==9);
    assert(findValue(T2, 10, 5)==4);
    assert(findValue(T2, 10, -8)==-1);

    initTableauRandom(T1, 10, 50);

    printf("T1: ");
    afficherTableau(T1, 10);

    printf("T2: ");
    afficherTableau(T2, 10);
    
    printf("Quel valeurs souhaitez vous rechercher?\n");
    scanf("%d", &val);
    if (findValue(T1, 10, val) != -1)
    {
        printf("La valeur %d est dans le tableau T1 a l'emplacement %d\n", val, findValue(T1, 10, val));
    }

    return 0;
}