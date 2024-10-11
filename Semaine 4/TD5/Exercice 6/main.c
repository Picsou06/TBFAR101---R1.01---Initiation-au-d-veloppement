#include <stdio.h>

#define MAXTAB 20

int recherche_dichotomique(int tab[], int taille, int value)
{
    int debut = 0;
    int fin = taille;
    int milieu;
    while (debut <= fin)
    {
        milieu = (debut + fin) / 2;
        if (tab[milieu] == value)
        {
            return milieu;
        }
        else if (tab[milieu] < value)
        {
            debut = milieu + 1;
        }
        else
        {
            fin = milieu - 1;
        }
    }
    return -1;

}

int main() {
    int tableau[MAXTAB] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
    int taille = 10;
    
    printf("Tableau initial :\n");
    for (int i = 0; i < taille; i++) {
        printf("%d ", tableau[i]);
    }
    printf("\n");
    
    int valeur;
    printf("Veuillez saisir une valeur : ");
    scanf("%d", &valeur);
    
    taille=recherche_dichotomique(tableau, taille, valeur);

    if (taille != -1)
    {
        printf("\n L'element est a la position %d", taille);
    }
    else
    {
        printf("\n L'element n'est pas dans le tableau");
    }
    return 0;
}