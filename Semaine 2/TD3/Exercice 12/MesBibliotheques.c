#include <stdio.h>

int calculSomme(int n)
{
    int somme = 100;
    int age = 0;

    for (int i = 1; i <= n; i++)
    {
        somme += 100 + (2 * age);
        age++;
    }

    return somme;
}