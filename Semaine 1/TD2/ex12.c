#include <stdio.h>

int main() {
    int a, b;
    printf("Entrer deux nombres: ");
    scanf("%d %d", &a, &b);
    int result = 0;

    while (b > 0) {
        if (b % 2 == 1) {
            result += a;
        }
        a *= 2;
        b /= 2;
    }
    printf("Produit: %d\n", result);

    return 0;
}