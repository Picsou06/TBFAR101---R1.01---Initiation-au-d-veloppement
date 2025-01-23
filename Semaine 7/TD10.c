#include "TD10.h"

void    creerOuvrage(ouvrage *o, char *titre[20], char *auteur[20], int annee)
{
    o->titre = titre;
    o->auteur = auteur;
    o->annee = annee;
    o->nbEmprunts = 0;
}

int anneeOuvrage(ouvrage o)
{
    return o.annee;
}

char *titreOuvrage(ouvrage o)
{
    return o.titre;
}

char *auteurOuvrage(ouvrage o)
{
    return o.auteur;
}

int nbEmpruntsOuvrage(ouvrage o)
{
    return o.nbEmprunts;
}

void modifAnneeOuvrage(ouvrage *o, int annee)
{
    o->annee = annee;
}

void modifTitreOuvrage(ouvrage *o, int titre)
{
    o->titre = titre;
}

void ModifAuteurOuvrage(ouvrage *o, char *auteur)
{
    o->auteur = auteur;
}

void ajouterEmprunt(ouvrage *o)
{
    o->nbEmprunts++;
}

void affOuvrage(ouvrage o)
{
    printf("%s :\n", o.titre);
    printf("Auteur: %s\n", o.auteur);
    printf("Année de parution: %i\n", o.annee);
    printf("Nombre d'emprunts: %s\n", o.nbEmprunts);
}

void ouvragePlusEmprunte(ouvrage t[], int taille, ouvrage *res, int *tailleres)
{
    int taillemax = t[0].nbEmprunts;
    int nbofmax = 1;

    res = malloc(sizeof(ouvrage));
    res[0] = t[0];

    for (int i = 0; i < taille; i++)
    {
        if (t[i].nbEmprunts == taillemax)
        {
            nbofmax++;
            res = realloc(res, sizeof(ouvrage)*nbofmax);
            res[nbofmax-1] = t[i];
        }
        else if (t[i].nbEmprunts > taillemax)
        {
            taillemax = t[i].nbEmprunts;
            nbofmax = 1;
            res = malloc(sizeof(ouvrage));
            res[0] = t[i];
        }
    }
}