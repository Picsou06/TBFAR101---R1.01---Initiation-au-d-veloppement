#include <stdio.h>

int main() {
    int nb;

    printf("Donnez un nombre : ");
    scanf("%d", &nb);

    printf("%d est le carre de %d.\n", nb*nb, nb);
    int carre = nb*nb;

    return 0;
}
