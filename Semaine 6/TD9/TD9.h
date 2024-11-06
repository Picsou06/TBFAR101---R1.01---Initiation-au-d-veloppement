#ifndef GIRLANDE_H
#define GIRLANDE_H

#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <windows.h>

typedef struct
{
    int* couleurs;
    int nombreLumiere;
} Girlande;

typedef struct
{
    Girlande* girlandes;
    int nombreGirlanes;
} Sapin;

void setColor(int ForgC);

#endif // GIRLANDE_H
