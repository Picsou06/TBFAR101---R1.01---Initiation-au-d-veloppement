#include "TD8.h"

int* concatene_table(int *tab1, int taille1, int *tab2, int taille2) {
    int taille = taille1 + taille2;
    int *tab = (int*)malloc(taille * sizeof(int));
    int *ptr = tab;

    for (int i = 0; i < taille1; i++) {
        *ptr = *(tab1 + i);
        ptr++;
    }

    for (int i = 0; i < taille2; i++) {
        *ptr = *(tab2 + i);
        ptr++;
    }
    
    return tab;
}

int main() {
    int firstDim = 10;
    int secondDim = 5;

    int *tab1;
    int *tab2;
    int *tabt;

    tab1 = (int*)malloc(firstDim * sizeof(int));
    tab2 = (int*)malloc(secondDim * sizeof(int));

    saisirTableau(tab1, firstDim);
    saisirTableau(tab2, secondDim);
    tabt = concatene_table(tab1, firstDim, tab2, secondDim);
    afficherTableau(tabt, firstDim+secondDim);

    free(tab1);
    free(tab2);

    return 0;
}
