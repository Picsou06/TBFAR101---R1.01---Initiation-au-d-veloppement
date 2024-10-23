#include <stdio.h>

void echange(int *a, int *b) {
    int temp;
    temp = *a;
    *a = *b;
    *b = temp;
}

int main() {
    int a;
    int b;
    scanf("%d", &a);
    scanf("%d", &b);

    echange(&a, &b);

    printf("Les valeurs de a et b sont: %d : %d\n", a, b);

    return 0;
}