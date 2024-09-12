#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    int result = 0;

    while (b > 0) {
        if (b % 2 == 1) {
            result += a;
        }
        a *= 2;
        b /= 2;
    }
    printf("Product: %d\n", result);

    return 0;
}