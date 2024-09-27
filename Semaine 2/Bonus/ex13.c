#include <stdio.h>

int main() {
    int typeTransport, poids, volume;
    int prixTransport;

    //printf("Type de transport (1: routier, 2: maritime, 3: aérien) : ");
    scanf("%d", &typeTransport);

    //printf("Poids de la marchandise : ");
    scanf("%d", &poids);

    //printf("Volume de la marchandise : ");
    scanf("%d", &volume);

    if (typeTransport == 1)
    {
        prixTransport = 40*poids;
    }
    else if (typeTransport == 2)
    {
        prixTransport = 30*poids;
    }
    else if (typeTransport == 3)
    {
        prixTransport = 20*poids + 10*volume;
    }

    printf("%d", prixTransport);

    return 0;
}