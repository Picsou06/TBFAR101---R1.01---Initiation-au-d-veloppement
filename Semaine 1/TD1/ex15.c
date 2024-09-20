#include <stdio.h>

int main() {
    float x;

    printf("Entrez x: ");
    scanf("%f", &x);

    float f_de_x = 3*(x*x)-5*x+7;

    printf("f(x) = %f.\n", f_de_x);

    return 0;
}
