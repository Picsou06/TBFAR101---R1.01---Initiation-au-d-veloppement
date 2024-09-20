#include "MesBibliotheques.h"

int main()
{
    int A, B, C;
    A = saisieEntier(0, 100) ;
    B = saisieEntier(0, 100) ;
    C = saisieEntier(0, 100) ;
    setColor(1);
    afficherEntier("Le minimum est ", minimum(A, B)) ;
    setColor(4);
    afficherEntier("Le maximum est ", maximum(A, C)) ;
    setColor(15);
    return 0 ;
}