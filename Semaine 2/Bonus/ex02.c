#include <stdio.h>

int main()
{
    char c;
    int size;
    scanf("%c", &c);
    fflush(stdin);
    scanf("%d", &size);
    //printf("Valeur : %c : %d\n", c, size);
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