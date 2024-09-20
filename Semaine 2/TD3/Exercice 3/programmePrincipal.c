#include "MesBibliotheques.h"
#include <stdio.h>

int main() {
    int hauteur, largeur;
    char symbole;
    printf("Enter le symbole du rectangle: ");
    scanf("%c", &symbole);
    printf("Enter la hauteur du rectangle: ");
    scanf("%d", &hauteur);
    printf("Enter la largeur du rectangle: ");
    scanf("%d", &largeur);
    Ligne(symbole, largeur, 15);
    return 0;
}