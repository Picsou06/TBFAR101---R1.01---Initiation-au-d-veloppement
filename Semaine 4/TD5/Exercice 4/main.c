#include <stdio.h>

#define MAXTAB 20

int insertElem(int tableau[], int taille, int valeur, int position) {
    for (int i = taille; i > position; i--) {
        tableau[i] = tableau[i - 1];
    }
    tableau[position] = valeur;
    return ++taille;
}

int main() {
    int tableau[MAXTAB] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int taille = 10;
    
    printf("Tableau initial :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    
    int valeur, position;
    printf("Veuillez saisir une valeur : ");
    scanf("%d", &valeur);
    printf("Veuillez saisir une position : ");
    scanf("%d", &position);
    
    taille=insertElem(tableau, taille, valeur, position);

    printf("\n");
    printf("Tableau apres modification :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    return 0;
}