#include <stdio.h>

int main() {
    float prixHT;
    const float taxe = 19.6;

    printf("Entrez le prix Hors Taxes: ");
    scanf("%f", &prixHT);

    printf("Le prix TCC est: %f.\n", prixHT+taxe*prixHT/100);
    float prixTCC = prixHT+taxe*prixHT/100;

    return 0;
}
