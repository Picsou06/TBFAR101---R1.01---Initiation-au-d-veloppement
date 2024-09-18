#include <stdio.h>

int main() {
    float min, max, average, nb;

    printf("Enter le nombre: ");
    scanf("%f", &nb);
    max = nb;
    min = nb;
    while (nb != -1){
        if (nb > max) {
            max = nb;
        }
        if (nb < min) {
            min = nb;
        }
        printf("Enter le nombre: ");
        scanf("%f", &nb);
    }
    printf("Le minimum est: %.2f.\n Le maximum est %.2f.\n La moyenne est %.2f.\n", min, max, (min + max) / 2);
    return 0;
}