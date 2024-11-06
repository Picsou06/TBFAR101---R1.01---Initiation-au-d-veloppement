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

int egales(Planete p1, Planete p2) {
    if (strcmp(p1.nom, p2.nom) == 0) {
        if (p1.densite == p2.densite) {
            if (p1.averageDistance == p2.averageDistance) {
                if (p1.nbSatellites == p2.nbSatellites) {
                    return 1;
                }
            }
        }
    }
    return 0;
}

int main() {
    Planete p = creerPlanete("Terre", 5.5, 1.0, 1);
    Planete p2 = creerPlanete("Mars", 5.5, 1.0, 1);
    printf("%d\n", egales(p, p2));
    return 0;
}