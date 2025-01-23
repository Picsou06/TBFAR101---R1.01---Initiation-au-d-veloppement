#include "TD12.h"

int premiereValeur(listeEntiers l) {
    return l->value;
}

int derniereValeur(listeEntiers l) {
    while (l->next != NULL) {
        l = l->next;
    }
    return l->value;
}

int niemeValeur(listeEntiers l, int n) {
    for (int i = 0; i < n - 1; i++) {
        l = l->next;
    }
    return l->value;
}

int nbElementsListe(listeEntiers l)
{
    int answer = 0;

    while (l != NULL) {
        answer++;
        l = l->next;
    }

    return answer;
}