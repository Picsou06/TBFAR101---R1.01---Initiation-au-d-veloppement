#include "TADPoint2D.h"

void afficheFigure(Point2D *p, int n) {
    for (int i = 0; i < n; i++) {
        afficherPoint(p[i]);
    }
}

int main() {
    Point2D p1,p2, p3, p4;
    p1 = creerPoint2D(1, 2);
    p2 = creerPoint2D(3, 4);
    p3 = creerPoint2D(5, 6);
    p4 = creerPoint2D(7, 8);

    Point2D points[4] = {p1, p2, p3, p4};
    afficheFigure(points, 4);

    return 0;
}