#include <stdio.h>

typedef struct
{
    int x;
    int y;
} Point2D;


int main() {
    Point2D p1,p2;
    p1.x = 1;
    p1.y = 2;
    p2.x = 3;
    p2.y = 4;

    printf("Le point p1 est (%d, %d)\n", p1.x, p1.y);

    p2.x = 2*p2.x;
    p2.y = 3*p2.y;

    printf("Le point p2 est (%d, %d)\n", p2.x, p2.y);

    return 0;
}