#include <stdio.h>

int main() {
    int nombre, i;

    printf("Entrez un nombre superieur a 2 : ");
    scanf("%d", &nombre);

    printf("Decomposition en nombres premiers de %d : ", nombre);

    for (i = 2; i <= nombre; i++) {
        while (nombre % i == 0) {
            printf("%d ", i);
            nombre /= i;
        }
    }

    printf("\n");

    return 0;
}