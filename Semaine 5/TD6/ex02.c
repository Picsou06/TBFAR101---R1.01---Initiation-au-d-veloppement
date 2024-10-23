#include <stdio.h>
#include <assert.h>

void puissance(int *a, int puissance) {
    int temp = *a;
    for (int i = 1; i < puissance; i++) {
        *a = *a * temp;
    }
}

int main() {
    int N;
    int p;
    scanf("%d", &N);
    scanf("%d", &p);
    
    puissance(&N, p);
    
    printf("La puissance de N par p est: %d\n", N);
    
    return 0;
}