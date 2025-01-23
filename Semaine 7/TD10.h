#ifndef PROTOS_H
#define PROTOS_H

#include <stdio.h>
#include <stdlib.h>

typedef struct
{
    char *titre;
    char *auteur;
    int annee;
    int nbEmprunts;
} ouvrage;

void creerOuvrage(ouvrage *o, char *titre[20], char *auteur[20], int annee);
int anneeOuvrage(ouvrage *o);
char *titreOuvrage(ouvrage *o);
char *auteurOuvrage(ouvrage *o);
int nbEmpruntsOuvrage(ouvrage *o);
void modifAnneeOuvrage(ouvrage *o, int annee);
void modifTitreOuvrage(ouvrage *o, char *titre[20]);
void modifAuteurOuvrage(ouvrage *o, char *auteur[20]);
void ajouterEmprunt(ouvrage *o);
void affOuvrage(ouvrage *o);

void ouvragePlusEmprunte(ouvrage *tab, int taille, ouvrage *res, int *tailleres);

#endif
