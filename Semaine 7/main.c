#include "TD10.h"

int main()
{
    FILE *monFichier;
    int nbLignes = 0;
    char ligneLue[20];
    char titre[20];
    char auteur[20];
    int annee;
    
    ouvrage listofOuvrage[10];
    int nbofouvrage = 0;

    monFichier = fopen("Livres.txt", "r");

    if (monFichier == NULL)
    {
        printf("L'ouvertue du fichier à échoué\n");
    }
    while (fgets(ligneLue, 20, monFichier))
    {
        if (nbLignes%3 == 0)
        {
            titre = ligneLue;
            creerOuvrage(listofOuvrage[nbofouvrage], titre, auteur, annee)
        }
    }
    
}