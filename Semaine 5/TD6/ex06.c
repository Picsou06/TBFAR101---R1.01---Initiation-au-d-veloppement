#include <stdio.h>

void afficheTableau(int *t, int taille) {

    for (size_t i = 0; i < taille-1; i++)
    {
        printf("%d, ", t[i]);
    }
    printf("%d\n", t[taille-1]);
}


void ajouterTableau(int *t, int *taille, int *MAXTAB, int newnumber) {
    if (*taille < *MAXTAB) {
        t[*taille] = newnumber;
        *taille += 1;
    } else {
        printf("Tableau plein\n");
    }
}

int main() {
    int MAXTAB = 20;
    int t[20] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int taille = 10;
    int *p = t;
    afficheTableau(p, taille);
    int newnumber;
    scanf("%d", &newnumber);
    ajouterTableau(p, &taille, &MAXTAB, newnumber);
    afficheTableau(p, taille);
    return 0;
}