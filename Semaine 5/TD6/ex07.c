#include <stdio.h>
#include <assert.h>

void minMax(int *t, int taille, int *min, int *max) {
    *min = t[0];
    *max = t[0];
    for (size_t i = 0; i < taille; i++)
    {
        if (t[i] < *min)
        {
            *min = t[i];
        }
        if (t[i] > *max)
        {
            *max = t[i];
        }
    } 
}

int main() {
    int t1[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 0};
    int t2[5] = {-1, -2, -3, -4, -5};
    int t3[7] = {10, 20, 30, 40, 50, 60, 70};
    int t4[3] = {5, 5, 5};

    int min, max;

    minMax(t2, 5, &min, &max);
    assert(min == -5);
    assert(max == -1);

    minMax(t3, 7, &min, &max);
    assert(min == 10);
    assert(max == 70);

    minMax(t4, 3, &min, &max);
    assert(min == 5);
    assert(max == 5);

    minMax(t1, 10, &min, &max);
    printf("Le minimum est %d et le maximum est %d\n", min, max);

    return 0;
}