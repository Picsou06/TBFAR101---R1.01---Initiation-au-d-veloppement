#include <stdio.h>

int main() {
    int jours;
    int prix_A, prix_B;

    printf("Entrez le nombre de jours de location : ");
    scanf("%d", &jours);

    prix_A = 250 + 10 * jours;
    prix_B = 300 + 5 * jours;

    printf("Prix total pour la formule A : %d€\n", prix_A);
    printf("Prix total pour la formule B : %d€\n", prix_B);

    if (prix_A < prix_B) {
        printf("La formule A est plus avantageuse.\n");
    } else if (prix_B < prix_A) {
        printf("La formule B est plus avantageuse.\n");
    } else {
        printf("Les deux formules sont équivalentes.\n");
    }

    return 0;
}