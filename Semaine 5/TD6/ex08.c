#include <stdio.h>
#include <assert.h>

void nbOccurrences(int *t, int taille, int *Occurrences, int valeur_cherchee) {
    for (size_t i = 0; i < taille; i++)
    {
        if (t[i] == valeur_cherchee)
        {
            *Occurrences += 1;
        }
    }
    
}

int main() {
    int MAXTAB = 20;
    int taille = 10;
    int t[10] = {1, 2, 3, 4, 5, 6, 7, 5, 9, 5};
    int valeur_cherchee;
    int Occurrences = 0;
    int *p = t;

    scanf("%d", &valeur_cherchee);

    nbOccurrences(p, taille, &Occurrences, valeur_cherchee);
    printf("Le nombre d'occurrences de %d est %d\n", valeur_cherchee, Occurrences);

    return 0;
}