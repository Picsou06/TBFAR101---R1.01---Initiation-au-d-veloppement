#include <stdio.h>

int pgcd(int a, int b)
{
    if (b == 0)
        return a;
    else
        return pgcd(b, a % b);
}

int main()
{
    int a;
    int b;

    printf("Entrez un nombre: ");
    scanf("%i", &a);
    printf("Entrez un autre nombre: ");
    scanf("%i", &b);
    printf("Le pgcd de %i et %i est %i.", a, b, pgcd(a, b));
    return 0;
}