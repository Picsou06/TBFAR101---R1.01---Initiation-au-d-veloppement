#include <stdio.h>

int main() {
    int P1, P2, P3, poidsArthur;

    scanf("%d", &P1);
    scanf("%d", &P2);
    scanf("%d", &P3);

    poidsArthur = (P1 + P2 - P3) / 2;

    printf("%d", poidsArthur);

    return 0;
}