#include <stdio.h>
#include <string.h>

int main()
{
    float tab[4] = {10.2, 20.7, -15.1, 30.9};
    float total = 0;
    for (int i = 0; i < sizeof(tab)/sizeof(int); i++)
    {
        total += tab[i];
    }
    printf("La somme des éléments du tableau est : %f\n", total);
}