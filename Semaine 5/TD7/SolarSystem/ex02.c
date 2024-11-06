#include "solarSystem.h"

Planete creerPlanete(char *nom, float densite, float averageDistance, int nbSatellites) {
    Planete p;
    strcpy(p.nom, nom);
    p.densite = densite;
    p.averageDistance = averageDistance;
    p.nbSatellites = nbSatellites;
    return p;
}

void afficherPlanete(Planete p) {
    printf("Nom: %s\n", p.nom);
    printf("Densite: %f\n", p.densite);
    printf("Distance moyenne: %f\n", p.averageDistance);
    printf("Nombre de satellites: %d\n", p.nbSatellites);
}

int main() {
    Planete p = creerPlanete("Terre", 5.5, 1.0, 1);
    afficherPlanete(p);
    return 0;
}