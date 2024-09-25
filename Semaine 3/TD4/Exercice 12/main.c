#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

int main()
{
    int T1[3][5] = {{1, 2, 0, 4, 5}, {1, 7, 8, 8, 10}, {-1, 2, 0, 4, 5}};
    int mini = T1[0][0];

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", T1[i][j]);
        }
        printf("\n");
    }
    printf("\n");

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (T1[i][j] < mini)
            {
                mini = T1[i][j];
            }
        }
    }

    printf("La valeur minimal du tableau T1 est %d\n", mini);

    return 0;
}