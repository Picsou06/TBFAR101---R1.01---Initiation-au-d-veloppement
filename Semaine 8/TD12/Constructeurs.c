#include "TD12.h"

listeEntiers CreerListeVide()
{
    return NULL;
}

void creerListe(listeEntiers* liste)
{
    *liste = CreerListeVide();
}