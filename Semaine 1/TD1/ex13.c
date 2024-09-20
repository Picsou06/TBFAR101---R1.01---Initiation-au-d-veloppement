#include <stdio.h>

int main() {
    float NbKm;
    float consommation;
    float prix;

    printf("Entrez le nombre de km de ce voyage: ");
    scanf("%f", &NbKm);

    printf("Entrez la consommation de votre vehicule sur 100km: ");
    scanf("%f", &consommation);

    printf("Entrez le prix du carburant: ");
    scanf("%f", &prix);

    float coutVoyage = (NbKm / 100) * consommation * prix;

    printf("Le prix est donc pour ce voyage de : %f.\n", coutVoyage);

    return 0;
}
