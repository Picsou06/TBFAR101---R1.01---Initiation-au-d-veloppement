#include <stdio.h>

int main() {
    float CurrentPrice;
    float OldPrice;

    printf("Entrez le prix de l'objet aujourd'hui: ");
    scanf("%f", &CurrentPrice);

    printf("Entrez le prix de l'objet il y a un an: ");
    scanf("%f", &OldPrice);

    printf("L'inflation est donc de: %f.\n", (CurrentPrice-OldPrice) / OldPrice);
    float inflation = (CurrentPrice-OldPrice) / OldPrice;

    return 0;
}
