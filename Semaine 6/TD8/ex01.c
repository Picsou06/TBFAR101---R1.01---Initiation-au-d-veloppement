#include "TD8.h"

int main() {
    int i;
    int *tab;

    printf("Entrez la taille du tableau : ");
    i = saisieEntier(1, 100);
    tab = (int*)malloc(i * sizeof(int));
    saisirTableau(tab, i);
    
    afficherTableau(tab, i);

    return 0;
}