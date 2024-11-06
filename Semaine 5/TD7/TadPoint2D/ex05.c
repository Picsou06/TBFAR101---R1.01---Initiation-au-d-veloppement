#include "TADPoint2D.h"

void initFigure(Point2D *p, int n) {
    for (int i = 0; i < n; i++) {
        p[i].x = saisieEntier(0, 10);
        p[i].y = saisieEntier(0, 10);
        printf("Point %d: (%d, %d) created!\n", i, p[i].x, p[i].y);
    }
}

void afficheFigure(Point2D *p, int n) {
    for (int i = 0; i < n; i++) {
        afficherPoint(p[i]);
    }
}

int distance(Point2D *p1, Point2D *p2) {
    int x = p2->x - p1->x;
    int y = p2->y - p1->y;
    return sqrt(x*x + y*y);
}

int perimetreFigure(Point2D *p, int n)
{
    int perimetre = 0;
    for (int i = 0; i < n-1; i++) {
        perimetre += distance(&p[i], &p[(i+1)%n]);
    }
    perimetre += distance(&p[n-1], &p[0]);
    return perimetre;
}

int main() {
    Point2D p1,p2, p3, p4;

    Point2D points[4] = {p1, p2, p3, p4};
    initFigure(points, 4);
    afficheFigure(points, 4);
    printf("Le perimetre de la figure est: %d\n", perimetreFigure(points, 4));


    return 0;
}