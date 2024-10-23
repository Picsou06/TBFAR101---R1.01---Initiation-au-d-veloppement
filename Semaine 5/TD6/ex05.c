#include <stdio.h>

void afficheTableau(int *t, int taille) {

    for (size_t i = 0; i < taille-1; i++)
    {
        printf("%d, ", t[i]);
    }
    printf("%d\n", t[taille-1]);
}

int main() {
    int t[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int *p = t;
    afficheTableau(p, 10);
    return 0;
}