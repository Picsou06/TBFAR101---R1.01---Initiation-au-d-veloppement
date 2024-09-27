#include <stdio.h>

int main() {
    int nbLocomotives, nbPassengerWagons, nbFreightWagons;
    double priceLocomotives, pricePassengerWagons, priceFreightWagons;
    double totalPrice;

    // printf("Nombre et prix unitaire de locomotives : ");
    scanf("%d %lf", &nbLocomotives, &priceLocomotives);

    // printf("Nombre et prix unitaire de wagons de passagers : ");
    scanf("%d %lf", &nbPassengerWagons, &pricePassengerWagons);

    // printf("Nombre et prix unitaire de wagons de marchandises : ");
    scanf("%d %lf", &nbFreightWagons, &priceFreightWagons);

    totalPrice = (nbLocomotives * priceLocomotives) + (nbPassengerWagons * pricePassengerWagons) + (nbFreightWagons * priceFreightWagons);

    printf("%.2lf\n", totalPrice);

    return 0;
}