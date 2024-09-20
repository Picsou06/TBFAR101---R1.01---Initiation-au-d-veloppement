#include <stdio.h>
#include <limits.h>
#include "MesBibliotheques.h"
#include <assert.h>

int main() {
    int addition = 0;
    printf("Entrez le nombre de note de l'eleve\n");
    int nbNote = saisieEntier(0, INT_MAX);
    for (int j = 0; j < nbNote; j++) {
        printf("Entrez la note de l'élève\n");
        int note = saisieEntier(0, 20);
        addition += note;
    }
    printf("La moyenne de l'élève est de %f\n", (float) addition / nbNote);
    return 0;
}