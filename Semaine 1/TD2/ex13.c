#include <stdio.h>

int main() {
    int count = 0;
    char c;
    printf("Entrer un char: ");
    scanf("%c", &c);

    while (c != '.'){
        if (c == 'A') {
            count++;
        }
        scanf("%c", &c);
    }

    printf("Le nombre de A est %d\n", count);

    return 0;
}