#include "TD8.h"

//TODO Tous les exercices de ce TD doivent utiliser la notation pointeur pour parcourir les tableaux
void sort_table_type(int* tab, int size, int** neg, int** pos, int* pointernegsize, int* pointerpossize)
{
    int *ptr = tab;
    int *pptr = *pos;
    int *nptr = *neg;
    int possize = 0, negsize = 0;
    for (int i = 0; i < size; i++)
    {
        if (*ptr >= 0)
        {
            possize++;
            *pos = realloc(*pos, possize * sizeof(int));
            pptr = *pos + possize - 1;
            *pptr = *ptr;
        }
        else
        {
            negsize++;
            *neg = realloc(*neg, negsize * sizeof(int));
            nptr = *neg + negsize - 1;
            *nptr = *ptr;
        }
        ptr++;
    }
    *pointernegsize = negsize;
    *pointerpossize = possize;
}

int main() {
    int firstDim = 3;

    int *tab1;
    int *neg = NULL, *pos = NULL;
    int negsize, possize;

    tab1 = (int*)malloc(firstDim * sizeof(int));

    saisirTableau(tab1, firstDim);
    sort_table_type(tab1, firstDim, &neg, &pos, &negsize, &possize);
    afficherTableau(neg, negsize);
    printf("Deuxieme tableau\n");
    afficherTableau(pos, possize);

    free(tab1);
    free(neg);
    free(pos);

    return 0;
}