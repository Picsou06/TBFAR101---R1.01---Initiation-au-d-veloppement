#include <stdio.h>

#define MAXTAB 20


//TODO : Fonction qui ajoute un element dans un tableau trié
int insertElem(int tableau[], int taille, int valeur) {
    int i = taille;
    while (i > 0 && tableau[i - 1] > valeur) {
        tableau[i] = tableau[i - 1];
        i--;
    }
    tableau[i] = valeur;
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
    
    int valeur;
    printf("Veuillez saisir une valeur : ");
    scanf("%d", &valeur);
    
    taille=insertElem(tableau, taille, valeur);

    printf("\n");
    printf("Tableau apres modification :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    return 0;
}