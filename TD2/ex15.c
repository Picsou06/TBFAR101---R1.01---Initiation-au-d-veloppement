#include <stdio.h>

int main() {
    float min, max, average, nb;

    printf("Enter le nombre: ");
    scanf("%f", &nb);

    while (nb != -1){
        if (nb > max) {
            max = nb;
        }
        else if (nb < min) {
            min = nb;
        }
        printf("Enter le nombre: ");
        scanf("%f", &nb);
    }

    return 0;
}