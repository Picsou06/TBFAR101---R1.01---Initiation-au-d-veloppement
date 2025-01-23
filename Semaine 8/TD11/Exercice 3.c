#include <stdio.h>

int estPair(int nombre)
{
    if (nombre <= 1)
        return 0;
    else if (nombre <= 2)
        return 1;
    else
        estPair(nombre - 2);
}

int main()
{
    int nb;
    printf("Entrez un nombre: ");
    scanf("%i", &nb);
    if (estPair(nb))
        printf("Le nombre %i est pair.", nb);
    else
        printf("Le nombre %i est impair.", nb);
    return 0;
}