#include <stdio.h>

int main() {
    int value;

    printf("Entrez le nombre de photocopie: ");
    scanf("%i", &value);

    float prix = 0;
    if (value >= 10)
    {
        prix += 0.10*10;
        value -= 10;
    }
    if (value >= 10)
    {
        prix += 0.09*10;
        value -= 10;
    }
    if (value > 0)
    {
        prix += 0.08*value;
    }

    printf("Le prix des photocopies est de : %.2f", prix);

    return 0;
}
