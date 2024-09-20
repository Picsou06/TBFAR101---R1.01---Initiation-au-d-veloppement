#include <stdio.h>
#include "MesBibliotheques.h"
#include <assert.h>

int main() {
    assert(Execpuissance(2, 3) == 8);
    assert(Execpuissance(3, 2) == 9);
    assert(Execpuissance(1, 1) == 1);
    assert(Execpuissance(-5, 1) == -5);
    assert(Execpuissance(15, 0) == 1);
    int nombre, puissance;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    printf("Entrez une puissance : ");
    scanf("%d", &puissance);

    printf("%d^%d = %d\n", nombre, puissance, Execpuissance(nombre, puissance));

    return 0;
}