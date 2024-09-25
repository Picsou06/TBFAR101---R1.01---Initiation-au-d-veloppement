#include <stdio.h>

int main()
{
    char tab[10] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i', '\0'};
    int nb_of_a = 0;
    for (int i = 0; i < sizeof(tab)/sizeof(char); i++)
    {
        if (tab[i] == 'a')
        {
            nb_of_a++;
        }
    }
    printf("Le nombre de 'a' dans le tableau \"%s\" est : %d\n", tab, nb_of_a);
}