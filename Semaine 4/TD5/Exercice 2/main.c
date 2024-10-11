#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

#define MAXTAB 20

void initTableauRandom(int tableau[], int taille) {
    srand(time(NULL));
    for (int i = 0; i < taille; i++) {
        tableau[i] = rand() % 51; // Valeurs aléatoires entre 0 et 50
    }
}

int suppElemPos(int tableau[], int taille, int value)
{
    assert(value >= 0 && value < taille);

    for (int i = value; i < taille - 1; i++) {
        tableau[i] = tableau[i + 1];
    }
    taille--;

    printf("Tableau apres suppression :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    return taille;
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

int main() {
    int T2[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    assert(findValue(T2, 10, 1)==0);
    assert(findValue(T2, 10, 10)==9);

    int tableau[MAXTAB];
    int taille;

    printf("Combien de valeurs voulez-vous saisir ? ");
    scanf("%d", &taille);

    initTableauRandom(tableau, taille);

    printf("Tableau initial :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");

    int value;
    printf("Saisissez une value dans le tableau : ");
    scanf("%d", &value);

    printf("Taille final: %i", suppElemPos(tableau, taille, findValue(tableau, taille, value)));

    return 0;
}