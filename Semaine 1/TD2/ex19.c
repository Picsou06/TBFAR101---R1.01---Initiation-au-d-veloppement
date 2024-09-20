#include <stdio.h>

int main() {
    int hauteur, largeur;

    printf("Enter la hauteur du rectangle: ");
    scanf("%d", &hauteur);
    printf("Enter la largeur du rectangle: ");
    scanf("%d", &largeur);
    while (hauteur > 0)
    {
        for (int i = 0; i < largeur; i++)
        {
            printf("*");
        }
        printf("\n");
        hauteur--;
    }
    return 0;
}