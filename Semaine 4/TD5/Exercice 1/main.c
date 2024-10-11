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

int suppElemPos(int tableau[], int taille, int position)
{
    assert(position >= 0 && position < taille);

    for (int i = position; i < taille - 1; i++) {
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

int main() {
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

    int position;
    printf("Saisissez une position dans le tableau : ");
    scanf("%d", &position);

    printf("Taille final: %i", suppElemPos(tableau, taille, position));

    return 0;
}