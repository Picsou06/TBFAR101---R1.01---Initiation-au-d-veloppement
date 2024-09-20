#include <stdio.h>

int main() {
    int nb;
    int limit;
    int total = 0;
    int i;

    printf("Entrer nb: ");
    scanf("%d", &nb);
    printf("Entrer limit: ");
    scanf("%d", &limit);

    for (i=0; i<=nb; i++)
    {
        total = total + i;
        if (total > limit)
        {
            printf("%d est le nombre qui fait depasser la valeur de %d ", i, limit);
            break;
        }
    }
    printf("La somme des entiers de 0 a %d est %d", nb, total);

    return 0;
}