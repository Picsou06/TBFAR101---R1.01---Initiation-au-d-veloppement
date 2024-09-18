#include <stdio.h>

int main() {
    int answer, nb;

    answer = 0;
    printf("Enter la taille de l'escalier: ");
    scanf("%d", &nb);
    for (int i = 1; i < nb+1; i++)
    {
        answer += i;
    }
    printf("Le nombre de bloc requis pour construire l'escalier est de: %d", answer);
    return 0;
}