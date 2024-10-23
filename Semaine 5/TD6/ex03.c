#include <stdio.h>

void auCarre(int *a) {
    *a = *a * *a;
}

int main() {
    int N;
    scanf("%d", &N);
    
    auCarre(&N);
    
    printf("Le carre de N est: %d\n", N);
    
    return 0;
}