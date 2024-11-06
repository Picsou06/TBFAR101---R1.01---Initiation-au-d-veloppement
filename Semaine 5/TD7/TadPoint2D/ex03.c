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

int main() {
    Point2D p1,p2, p3, p4;

    Point2D points[4] = {p1, p2, p3, p4};
    initFigure(points, 4);
    afficheFigure(points, 4);

    return 0;
}