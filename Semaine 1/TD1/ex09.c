#include <stdio.h>

int main() {
    int hauteur;
    int largeur;

    printf("Entrez la hauteur : ");
    scanf("%i", &hauteur);
    printf("Entrez la largeur : ");
    scanf("%i", &largeur);

    printf("Le perimetre du rectangle est: %i.\n", largeur*hauteur);
    int parimetre = largeur*hauteur;

    return 0;
}
