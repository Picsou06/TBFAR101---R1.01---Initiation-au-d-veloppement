#include <stdio.h>

int main()
{
    int nb_brique, answer;
    answer = 0;
    scanf("%d", &nb_brique);
    for (int i = 1; i*i*i <= nb_brique; i++)
    {
        answer=i;
    }
    printf("%d\n", answer);
    printf("%d\n", answer*answer*answer);
    return 0;
}