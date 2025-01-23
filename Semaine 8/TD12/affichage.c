#include "TD12.h"

void afficherListe(listeEntiers liste)
{
    element* temp = liste;
    while (temp != NULL)
    {
        printf("%i\n", temp->value);
        temp = temp->next;
    }
}