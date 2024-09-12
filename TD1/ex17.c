#include <stdio.h>

int main() {
    float value;

    printf("Entrez le nombre: ");
    scanf("%f", &value);

    float absolue = ((value < 0) * -1 + (value >= 0)) * value;

    printf("La valeur absolue de %f est %f.\n", value, absolue);

    return 0;
}
