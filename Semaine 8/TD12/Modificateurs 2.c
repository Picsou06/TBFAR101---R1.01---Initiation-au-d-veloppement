#include "TD12.h"

void supprimerElementDebut(listeEntiers *list)
{
    if (*list == NULL) return;
    element* temp = *list;
    *list = (*list)->next;
    free(temp);
}

void supprimerElementFin(listeEntiers *list)
{
    if (*list == NULL) return;
    if ((*list)->next == NULL) {
        free(*list);
        *list = NULL;
        return;
    }
    element* temp = *list;
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    free(temp->next);
    temp->next = NULL;
}

void supprimerElementMilieu(int position, listeEntiers *list)
{
    if (*list == NULL || position <= 0) return;
    element* temp = *list;
    for (int i = 0; i < position - 1 && temp->next != NULL; i++)
    {
        temp = temp->next;
    }
    if (temp->next == NULL) return;
    element* temp2 = temp->next;
    temp->next = temp->next->next;
    free(temp2);
}

void supprimerValeur(int valeur, listeEntiers *list)
{
    if (*list == NULL) return;
    if ((*list)->value == valeur) {
        supprimerElementDebut(list);
        return;
    }
    element* temp = *list;
    while (temp->next != NULL && temp->next->value != valeur)
    {
        temp = temp->next;
    }
    if (temp->next == NULL) return;
    element* temp2 = temp->next;
    temp->next = temp->next->next;
    free(temp2);
}