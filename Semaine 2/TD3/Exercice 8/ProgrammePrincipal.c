#include <stdio.h>
#include <limits.h>
#include "MesBibliotheques.h"

int main() {
    int a = saisieEntier(INT_MIN, INT_MAX);

    int premier = checkPremier(a);

    if (premier == 0) {
        printf("Le nombre n'est pas premier\n");
    } else {
        printf("Le nombre est premier\n");
    }

    return 0;
}