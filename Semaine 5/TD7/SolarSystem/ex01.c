#include "solarSystem.h"

Planete creerPlanete(char *nom, float densite, float averageDistance, int nbSatellites) {
    Planete p;
    strcpy(p.nom, nom);
    p.densite = densite;
    p.averageDistance = averageDistance;
    p.nbSatellites = nbSatellites;
    return p;
}

int main() {
    Planete p = creerPlanete("Terre", 5.5, 1.0, 1);
    return 0;
}