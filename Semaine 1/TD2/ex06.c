#include <stdio.h>

int main() {
    int N;
    int produit = 1;

    printf("Entrez un entier N : ");
    scanf("%d", &N);

    for (int i = 1; i <= N; i++) {
        produit *= i;
    }

    printf("Le produit des %d premiers entiers est : %lld\n", N, produit);

    return 0;
}