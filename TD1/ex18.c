#include <stdio.h>

int main() {
    int value;

    printf("Entrez le nombre: ");
    scanf("%i", &value);

    if (value % 2 == 0)
        printf("Le nombre %i est pair!\n", value);
    else
        printf("Le nombre %i est impair!\n", value);

    return 0;
}
