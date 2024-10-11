#include <stdio.h>

#define MAXTAB 20

void tri_a_bulle(int tab[], int taille)
{
    int i, j, temp;
    for (i = 0; i < taille - 1; i++)
    {
        for (j = 0; j < taille - i - 1; j++)
        {
            if (tab[j] > tab[j + 1])
            {
                temp = tab[j];
                tab[j] = tab[j + 1];
                tab[j + 1] = temp;
            }
        }
    }
}

int main() {
    int tableau[MAXTAB] = {10, 8, 7, 11, 25, 1, -1, 0, 12, 7};
    int taille = 10;
    
    printf("Tableau initial :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    
    tri_a_bulle(tableau, taille);

    printf("Tableau trié :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    return 0;
}