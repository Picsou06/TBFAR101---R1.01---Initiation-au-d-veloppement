#include <stdio.h>

int main() {
    int answer, nb, size, usedBlocks;

    answer = 0;
    size = 1;
    usedBlocks = 0;
    //printf("Entrez le nombre de blocs disponible pour l'escalier: ");
    scanf("%d", &nb);
    while (nb > 0)
    {
        nb -= size*size;
        if (nb >= 0)
        {
            usedBlocks += size*size;
            size=size+2;
            answer++;
        }
    }
    printf("%d\n%d", answer, usedBlocks);
    return 0;
}