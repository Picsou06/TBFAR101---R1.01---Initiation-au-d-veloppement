#include <stdio.h>
#include <limits.h>
#include "MesBibliotheques.h"

int main() {
    int a = saisieEntier(INT_MIN, INT_MAX);
    int b = saisieEntier(INT_MIN, INT_MAX);

    int sign = getSign(a, b);

    if (sign == -1) {
        printf("Le resultat de la multiplication de %d et %d est negatif.\n", a, b);
    } else if (sign == 0) {
        printf("Le resultat de la multiplication de %d et %d est nul.\n", a, b);
    } else {
        printf("Le resultat de la multiplication de %d et %d est positif.\n", a, b);
    }

    return 0;
}