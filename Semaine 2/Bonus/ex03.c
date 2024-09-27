#include <stdio.h>

int main()
{
    char s;
    int nbLignes;
    scanf("%c", &s);
    fflush(stdin);
    scanf("%d", &nbLignes );
    //printf("Valeur : %c : %d\n", s, nbLignes );
    for (int i = 0; i < nbLignes; i++)
    {
        for (int j = 0; j < nbLignes-i-1; j++)
        {
            printf(" ");
        }
        printf("%c\n", s);
    }
    return 0;
}