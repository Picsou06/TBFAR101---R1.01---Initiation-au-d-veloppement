#include <stdio.h>

int estRepunit(int n) {
    if (n == 1) {
        return 1;
    }
    if (n < 10 && n != 1) {
        return 0;
    }
    return estRepunit(n / 10) && (n % 10 == 1);
}

int main() {
    int n;
    printf("Entrez un entier positif : ");
    scanf("%d", &n);
    if (n > 0) {
        if (estRepunit(n)) {
            printf("%d est un rep-unit.\n", n);
        } else {
            printf("%d n'est pas un rep-unit.\n", n);
        }
    } else {
        printf("L'entier doit être positif.\n");
    }
    return 0;
}