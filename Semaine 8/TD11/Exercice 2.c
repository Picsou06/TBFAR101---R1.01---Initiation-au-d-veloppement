#include <stdio.h>
#include <math.h>

int puissanceAB(int a, int b)
{
    if (b <= 0)
        return 1;
    else
        return a*puissanceAB(a, b-1);
}

int main()
{
    int a;
    int b;

    printf("Enter a number: ");
    scanf("%i", &a);
    printf("Enter a power: ");
    scanf("%i", &b);
    
    printf("Result for %i^%i=%i.\nResult: %i", a, b, (int)pow(a, b), puissanceAB(a, b));
    return 0;
}