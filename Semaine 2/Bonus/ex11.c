#include <stdio.h>

int main() {
    int poids, volume, air, boat, train;

    //printf("Entrez le poids de la marchandise : ");
    scanf("%d", &poids);

    //printf("Entrez le volume de la marchandise : ");
    scanf("%d", &volume);

    air = 40*poids;
    boat = 30*volume;
    train = 20*poids+10*volume;
    if (air < boat && air < train)
    {
        printf("prendre l'avion");
    }
    else if (boat < air && boat < train)
    {
        printf("prendre le bateau");
    }
    else
    {
        printf("prendre le train");
    }

    return 0;
}