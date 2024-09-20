#include <stdio.h>
#include <limits.h>
#include "MesBibliotheques.h"
#include <assert.h>

int main() {
    assert(checkParfait(6) == 1);
    assert(checkParfait(28) == 1);
    assert(checkParfait(0) == 0);
    assert(checkParfait(-1) == 0);
    int a = saisieEntier(INT_MIN, INT_MAX);

    int premier = checkParfait(a);

    if (premier == 0) {
        printf("Le nombre n'est pas premier\n");
    } else {
        printf("Le nombre est premier\n");
    }

    return 0;
}