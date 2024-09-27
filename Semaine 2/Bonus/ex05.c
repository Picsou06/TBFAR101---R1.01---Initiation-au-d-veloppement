#include <stdio.h>

int main()
{
    int nb_population, nb_partage, nb_jours, nb_contamine;
    nb_jours = 1;
    nb_contamine = 1;
    scanf("%d", &nb_population);
    scanf("%d", &nb_partage);
    while (nb_contamine < nb_population)
    {
        nb_contamine += nb_contamine * nb_partage;
        nb_jours++;
    }
    printf("%d\n", nb_jours);
    return 0;
}