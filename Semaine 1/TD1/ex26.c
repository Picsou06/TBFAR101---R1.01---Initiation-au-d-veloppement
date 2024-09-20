#include <stdio.h>

int main() {
    int heuresTravail;
    int salaire = 0;

    printf("Entrez le nombre d'heures de travail dans le mois : ");
    scanf("%d", &heuresTravail);

    if (heuresTravail > 35)
    {
        heuresTravail -= 35;
        salaire = 40 * 35 + 60 * heuresTravail;
    }
    else
        salaire = 40 * heuresTravail;

    printf("Le salaire de l'employe est de %d euro\n", salaire);

    return 0;
}