#include <stdio.h>

int main()
{
    int nombre, racine;

    printf("Entrez un nombre : ");
    scanf("%d", &nombre);

    if (nombre >= 0)
    {
        racine = 0;
        while (racine * racine < nombre)
        {
            racine++;
        }

        if (racine * racine == nombre)
        {
            printf("%d est le carre de %d\n", nombre, racine);
        }
        else
        {
            printf("%d n'est pas le carre d'un nombre\n", nombre);
        }
    }
    else
    {
        printf("%d n'est pas le carre d'un nombre\n", nombre);
    }

    return 0;
}