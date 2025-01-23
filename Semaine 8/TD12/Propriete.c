#include "TD12.h"

int estVide(listeEntiers l)
{
    return l == NULL;
}

int estDansListe(listeEntiers l, int valeur)
{
    while (l != NULL) {
        if (l->value == valeur)
            return 1;
        l = l->next;
    }
    return 0;
}