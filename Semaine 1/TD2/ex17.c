#include <stdio.h>

int main() {
    int answer, nb, size;

    answer = 0;
    size = 0;
    printf("Enter le nombre de bloc disponible pour l'escalier: ");
    scanf("%d", &nb);
    while (nb > 0)
    {
        nb -= size;
        if (nb >= 0)
        {
            size++;
            answer++;
        }
    }
    if (answer > 0)
    {
        answer--;
    }
    printf("Le nombre de bloc requis pour construire l'escalier est de: %d", answer);
    return 0;
}