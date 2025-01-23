#include <stdio.h>

int pascomprislaquestion(int n, int x)
{
    if (n % 100 != x){
        pascomprislaquestion(n+1, x);
    }
    else
    {
        return n;
    }
}


int main()
{
    int n;
    int x;
    printf("Entrez un nombre: ");
    scanf("%i", &n);
    printf("Entrez un autre nombre: ");
    scanf("%i", &x);
    if (x < 10 || x > 99)
    {
        printf("X doit être compris entre 10 et 99.");
        return 1;
    }
    printf("Le nombre le plus proche de %i se terminant par %i est %i.", n, x, pascomprislaquestion(n, x));
    return 0;
}