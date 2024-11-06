#ifndef SOLARSYSTEM_H
#define SOLARSYSTEM_H

#include <stdio.h>
#include <math.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MAXTAB 20

typedef struct
{
    char nom[20];
    float densite;
    float averageDistance;
    int nbSatellites;
} Planete;


#endif