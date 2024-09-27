#include <stdio.h>
#include <assert.h>
#include <time.h>
#include <stdlib.h>

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

int main() {
    int tab1[9];
    int tab2[8]; 
    int tab3[17] = {0};
    int mini_tab1, mini_tab2;
    int taille1 = 9, taille2 = 8;

    initTableauRandom(tab1, 9, 50);
    initTableauRandom(tab2, 8, 50);

    printf("Tableau 1:\n");
    afficherTableau(tab1, 9);
    printf("\n");
    printf("Tableau 2:\n");
    afficherTableau(tab2, 8);
    printf("\n");

    for (int i = 0; i < 17; i++) {
        if (taille1 > 0)
            mini_tab1 = minimumValue(tab1, taille1);
        if (taille2 > 0)
            mini_tab2 = minimumValue(tab2, taille2);
        if (taille1 == 0) { //Si le tableau 1 est vide
            tab3[i] = tab2[mini_tab2];
            tab2[mini_tab2] = tab2[taille2 - 1];
            taille2--;
        } else if (taille2 == 0 || (taille1 > 0 && tab1[mini_tab1] < tab2[mini_tab2])) { // Si le tableau 2 est vide ou tab1 < tab2
            tab3[i] = tab1[mini_tab1];
            tab1[mini_tab1] = tab1[taille1 - 1];
            taille1--;
        } else {
            tab3[i] = tab2[mini_tab2];
            tab2[mini_tab2] = tab2[taille2 - 1];
            taille2--;
        }
    }

    printf("Tableau 3:\n");
    afficherTableau(tab3, 17);
}