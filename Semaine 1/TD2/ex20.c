#include <stdio.h>

int main() {
    int nb;
    int size;
    size = 1;

    printf("Enter le nombre d'etage: ");
    scanf("%d", &nb);
    for (int i = 0; i < nb; i++)
    {
        for (int j = 0; j < size; j++)
        {
            printf("*");
        }
        printf("\n");
        size++;
    }
    return 0;
}