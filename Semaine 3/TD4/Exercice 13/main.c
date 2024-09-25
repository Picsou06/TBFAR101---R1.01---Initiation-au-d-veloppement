#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <assert.h>

int main()
{
    int T1[3][5] = {{1, 2, 0, 4, 5}, {1, 7, 8, 8, 10}, {-1, 2, 0, 4, 5}};
    int val;
    int count = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            printf("%d ", T1[i][j]);
        }
        printf("\n");
    }
    printf("\n");
    printf("Quel valeurs souhaitez vous rechercher?\n");
    scanf("%d", &val);

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 5; j++)
        {
            if (T1[i][j] == val)
            {
                count++;
            }
        }
    }

    printf("La valeur %d est dans le tableau T1 %d fois\n", val, count);

    return 0;
}