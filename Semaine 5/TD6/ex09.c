#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void saisirTableau(int *t, int taille) {
    srand(time(NULL));
    for (int i = 0; i < taille; i++) {
        t[i] = rand() % 100;
    }
}

void nbOccurrences(int *t, int taille, int *Occurrences, int valeur_cherchee) {
    for (size_t i = 0; i < taille; i++) {
        if (t[i] == valeur_cherchee) {
            *Occurrences += 1;
        }
    }
}

int main() {
    int MAXTAB = 20;
    int taille = 10;
    int t[10];
    int valeur_cherchee;
    int Occurrences = 0;
    int *p = t;

    saisirTableau(p, taille);

    printf("Tableau généré : ");
    for (int i = 0; i < taille; i++) {
        printf("%d ", t[i]);
    }
    printf("\n");

    printf("Entrez la valeur à chercher : ");
    scanf("%d", &valeur_cherchee);

    nbOccurrences(p, taille, &Occurrences, valeur_cherchee);
    printf("Le nombre d'occurrences de %d est %d\n", valeur_cherchee, Occurrences);

    return 0;
}