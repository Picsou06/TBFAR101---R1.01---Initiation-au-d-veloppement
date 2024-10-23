#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void calculSomme(int *t, int taille, int *somme) {
    for (size_t i = 0; i < taille; i++) {
        somme += t[i];
    }
}

int main() {
    int t[10];
    int taille = 10;
    int somme = 0;

    srand(time(NULL));
    for (int i = 0; i < taille; i++) {
        t[i] = rand() % 100;
    }

    calculSomme(t, taille, &somme);

    printf("La somme des éléments du tableau est: %d\n", somme);

    return 0;
}