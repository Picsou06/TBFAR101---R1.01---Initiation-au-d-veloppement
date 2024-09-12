#include <stdio.h>

int main() {
    float rayon;
    const float PI = 3.14;

    printf("Entrez le rayon du cercle : ");
    scanf("%f", &rayon);

    printf("Le perimetre du cercle est: %f.\n", 2*rayon*PI);
    float perimetre = 2*rayon*PI;

    return 0;
}
