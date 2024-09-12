#include <stdio.h>

int main() {
    int age;
    int sexe;

    printf("Entrez l'age de l'habitant : ");
    scanf("%d", &age);

    printf("Entrez le sexe de l'habitant (H/F | 0,1) : ");
    scanf(" %d", &sexe);

    if (sexe == 0 && age > 20)
    {
        printf("L'habitant est imposable.\n");
    } 
    else if (sexe == 1 && age >= 18 && age <= 35)
    {
        printf("L'habitant est imposable.\n");
    }
    else {
        printf("L'habitant n'est pas imposable.\n");
    }

    return 0;
}