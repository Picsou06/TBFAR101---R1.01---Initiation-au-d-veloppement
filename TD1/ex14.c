#include <stdio.h>

int main() {
    int a;
    int b;
    int quotient;
    int reste;

    printf("Entrez l'entier POSITIF recherche: ");
    scanf("%d", &a);

    printf("Entrez son diviseur: ");
    scanf("%d", &b);

    if (a < 0 || b < 0)
    {
        printf("Les valeurs doivent être positives!");
        return 0;
    }
    quotient = a / b;
    reste = a % b;
    printf("%d = %d * %d + %d\n", a, b, quotient, reste);

    return 0;
}
