#include <stdio.h>

int main() {
    int nbLignes, nbColonnes, epaisseur;
    char caractere;
    scanf("%c", &caractere);
    scanf("%d", &nbLignes);
    scanf("%d", &nbColonnes);
    scanf("%d", &epaisseur);
    if (nbLignes < 2*epaisseur || nbColonnes < 2*epaisseur)
    {
        return 0;
    }
    for (int i = 0; i < epaisseur; i++)
    {
        for (int i = 0; i < nbColonnes; i++)
        {
            printf("%c", caractere);
        }
        printf("\n");
    }
    for (int i = 0; i < nbLignes-(epaisseur*2); i++)
    {
        for (int i = 0; i < epaisseur; i++)
        {
            printf("%c", caractere);
        }
        for (int i = 0; i < nbColonnes-(epaisseur*2); i++)
        {
            printf(" ");
        }
        for (int i = 0; i < epaisseur; i++)
        {
            printf("%c", caractere);
        }
        printf("\n");
    }
    for (int i = 0; i < epaisseur; i++)
    {
        for (int i = 0; i < nbColonnes; i++)
        {
            printf("%c", caractere);
        }
        printf("\n");
    }
    return 0;
}