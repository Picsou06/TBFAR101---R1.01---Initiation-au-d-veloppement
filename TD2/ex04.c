#include <stdio.h>

int main() {
    int nb;
    int total = 0;
    int i;

    printf("Entrer x: ");
    scanf("%d", &nb);

    for (i=0; i<=nb; i++)
    {
        total = total + i;
    }
    printf("La somme des entiers de 0 a %d est %d", nb, total);

    return 0;
}