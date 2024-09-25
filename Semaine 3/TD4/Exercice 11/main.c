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
    return 0;
}