#include <stdio.h>

int main() {
    float pSeuil = 2.3;
    float vSeuil = 7.41;
    float pActuelle;
    float vActuelle;

    printf("Entrez la pression conrante : ");
    scanf("%f", &pActuelle);
    printf("Entrez la largeur : ");
    scanf("%f", &vActuelle);

    if (pActuelle > pSeuil && vActuelle > vSeuil) {
        printf("Arret immediat !\n");
    } else if (pActuelle > pSeuil) {
        printf("Augmenter le volume.\n");
    } else if (vActuelle > vSeuil) {
        printf("Diminuer le volume.\n");
    } else {
        printf("Tout va bien.\n");
    }

    return 0;
}
