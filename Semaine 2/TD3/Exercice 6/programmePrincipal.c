#include "MesBibliotheques.h"
#include <assert.h>

int main()
{
    assert(minimum(1, 2) == 1);
    assert(minimum(2, 1) == 1);
    assert(minimum(1, 1) == 1);
    assert(minimum(-5, 1) == -5);
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