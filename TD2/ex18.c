#include <stdio.h>

int main() {
    int nb;

    printf("Enter le nombre d'etoile: ");
    scanf("%d", &nb);
    while (nb > 0)
    {
        nb--;
        printf("*");
    }
    return 0;
}