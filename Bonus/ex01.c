#include <stdio.h>

int main()
{
    char c;
    int size;
    printf("Entrez un caractère : ");
    scanf(" %c", &c);
    fflush(stdin);
    printf("Entrez une taille : ");
    scanf("%d", &size);
    printf("\n");
    printf("Valeur : %c : %d\n", c, size);
    for (int i = 0; i < size; i++)
    {
        for (int j = 0; j <= i-1; j++)
        {
            printf(" ");
        }
        printf("%c\n", c);
    }
    return 0;
}