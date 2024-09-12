#include <stdio.h>

int main() {
    float value;
    float value2;

    printf("Entrez le premier nombre: ");
    scanf("%f", &value);

    printf("Entrez le deuxieme nombre: ");
    scanf("%f", &value2);

    if (value+value2 >= 0)
        printf("Le nombre %.2f est positif.\n", value+value2);
    else
        printf("Le nombre %.2f est negatif.\n", value+value2);

    return 0;
}
