#include <stdio.h>

int recursive_count(int objectifs)
{
    if (objectifs <= 0)
        return objectifs;
    else
        return objectifs+recursive_count(objectifs-1);
}

int main()
{
    int nb;
    printf("Enter a number: ");
    scanf("%i", &nb);
    printf("Result for i=%i: %i", nb, recursive_count(nb));
    return 0;
}