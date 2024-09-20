#include <stdio.h>

int main() {
    int value;

    printf("Entrez le nombre: ");
    scanf("%i", &value);

    if (value == 0)
        printf("Le nombre %i est nul.\n", value);
    else if (value > 0)
        printf("Le nombre %i est positif.\n", value);
    else
        printf("Le nombre %i est negatif.\n", value);

    return 0;
}
