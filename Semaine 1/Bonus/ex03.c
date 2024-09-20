#include <stdio.h>

int main()
{
    int age;
    scanf("%d", &age);
    //printf("Valeur : %c : %d\n", c, size);
    if (age == 6 || age == 7)
    {
        printf("Poussin");
    }
    else if (age == 8 || age == 9)
    {
        printf("Pupille");
    }
    else if (age == 10 || age == 11)
    {
        printf("Minime");
    }
    else if (age >= 12 && age <= 14)
    {
        printf("Cadet");
    }
    else
    {
        printf("Age non valide");
    }
    return 0;
}