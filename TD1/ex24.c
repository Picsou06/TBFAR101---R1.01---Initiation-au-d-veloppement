#include <stdio.h>

int main() {
    int age;

    printf("Entrez l'age de l'habitant : ");
    scanf("%d", &age);

    if (age < 18)
    {
        printf("L'habitant bénéficie d'une reduction.\n");
    } 
    else if (age > 60)
    {
        printf("L'habitant bénéficie d'une reduction.\n");
    }
    else {
        printf("L'habitant ne bénéficie pas d'une reduction.\n");
    }

    return 0;
}