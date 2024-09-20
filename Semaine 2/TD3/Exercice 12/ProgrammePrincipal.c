#include <stdio.h>
#include <limits.h>
#include "MesBibliotheques.h"
#include <assert.h>

int main()
{
    int n;
    printf("Entrez l'âge de Marie lors de son n-ième anniversaire : ");
    scanf("%d", &n);

    int somme = calculSomme(n);
    printf("La somme sur le compte de Marie lors de son %d-ième anniversaire est de %d €.\n", n, somme);

    return 0;
}