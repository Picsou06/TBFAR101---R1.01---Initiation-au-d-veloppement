#include <stdio.h>

int main() {
    char c;

    printf("Entrez un charactere : ");
    scanf("%c", &c);

    if (c>='a' && c<='z')
    {
        printf("Le charactere est une minuscule.\n");
    }
    else if (c>='A' && c<='Z')
    {
        printf("Le charactere est une majuscule.\n");
    }

    return 0;
}