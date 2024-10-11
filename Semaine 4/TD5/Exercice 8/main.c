#include <stdio.h>

#define MAXTAB 20

void tri_par_selection(int tab[], int taille)
{
    int i, j, min, temp;
    for (i = 0; i < taille - 1; i++)
    {
        min = i;
        for (j = i + 1; j < taille; j++)
        {
            if (tab[j] < tab[min])
            {
                min = j;
            }
        }
        temp = tab[i];
        tab[i] = tab[min];
        tab[min] = temp;
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
    
    tri_par_selection(tableau, taille);

    printf("Tableau trié :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    return 0;
}