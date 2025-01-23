#include "TD12.h"

void ajouterElementDebut(int valeur, listeEntiers *list)
{
    element* new = (element*)malloc(sizeof(element));
    new->value = valeur;
    new->next = *list;
    *list = new;
}

void ajouterElementFin(int valeur, listeEntiers *list)
{
    element* new = (element*)malloc(sizeof(element));
    new->value = valeur;
    new->next = NULL;

    if (*list == NULL) {
        *list = new;
    } else {
        element* temp = *list;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = new;
    }
}

void ajouterElementMilieu (int valeur, int position, listeEntiers* liste){
    element* new = (element*)malloc(sizeof(element));
    element* temp = *liste;
    for (int i = 0; i < position - 1; i++)
    {
        temp = temp->next;
    }
    new->value = valeur;
    new->next = temp->next;
    temp->next = new;
}