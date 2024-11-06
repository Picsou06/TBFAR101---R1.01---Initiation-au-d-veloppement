#ifndef TADPOINT2D_H
#define TADPOINT2D_H

#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#define MAXTAB 20

typedef struct
{
    int x;
    int y;
} Point2D;

Point2D creerPoint2D (int a, int b);
Point2D creerPoint2DDefaut ();
Point2D creerPoint2DCopie (Point2D p);
void creerPoint2D_proc (Point2D *newP, int a, int b);
void creerPoint2DDefaut_proc (Point2D *newP);
void creerPoint2DCopie_proc (Point2D *newP, Point2D p);
int abscisse (Point2D P);
int ordonnee (Point2D P);
void modifAbscisse (Point2D *P, int nb);
void modifOrdonnee (Point2D *P, int nb);
void afficherPoint (Point2D P);
int saisieEntier (int borneInf, int borneSup);
int nombreAleatoire (int borneInf, int borneSup);

#endif