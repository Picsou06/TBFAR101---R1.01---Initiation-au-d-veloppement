#include "TD8.h"

int main() {
    int firstDim, secondDim;

    int **tab;

    printf("Entrez le nombre de ligne du tableau :\n");
    firstDim = saisieEntier(1, 100);
    tab = (int**)malloc(firstDim * sizeof(int*));
    
    printf("Entrez la taille d'un tableau :\n");
    secondDim = saisieEntier(1, 100);
    for (int i = 0; i < firstDim; i++) {
        tab[i] = (int*)malloc(secondDim * sizeof(int));
    }

    int *ptr = *tab

    for (int i = 0; i < firstDim; i++) {
        saisirTableau(ptr, secondDim);
        ptr += secondDim;
    }

    ptr = *tab;

    for (int i = 0; i < firstDim; i++) {
        afficherTableau(ptr, secondDim);
        ptr += secondDim; // Déplacement du pointeur vers le prochain tableau
    }

    for (int i = 0; i < firstDim; i++) {
        free(tab[i]);
    }
    free(tab);

    return 0;
}