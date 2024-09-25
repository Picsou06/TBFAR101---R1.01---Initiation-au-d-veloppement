#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

void initTableauRandom(int tab[], int taille, int valMax)
{
    int i;
    srand (time(NULL));
    for (i = 0; i < taille; i++)
    {
        tab[i] = rand() % (valMax+1);
    }
}

int plusGrandEcart(int tableau[], int taille) {
    int plusGrand = 0;
    for (int i = 0; i < taille - 1; i++) {
        int ecart = abs(tableau[i] - tableau[i + 1]);
        if (ecart > plusGrand) {
            plusGrand = ecart;
        }
    }
    return plusGrand;
}

int main() {
    int T1[10];
    int T2[10] = {1, 3, 5, 7, 9, 11, 13, 15, 17, 19};

    initTableauRandom(T1, 10, 100);

    printf("T1: ");
    for (int i = 0; i < 10; i++) {
        printf("%d ", T1[i]);
    }
    printf("\n");

    int plusGrandEcartT1 = plusGrandEcart(T1, 10);
    printf("Plus grand ecart dans T1: %d\n", plusGrandEcartT1);

    assert(plusGrandEcart(T2, 10) == 2);

    return 0;
}