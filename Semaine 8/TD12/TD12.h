#include <stdio.h>
#include <stdlib.h>

typedef struct element element;
struct element {
    int value;
    element* next;
};

typedef element* listeEntiers;

// Constructeurs
listeEntiers CreerListeVide();
void creerListe(listeEntiers* liste);

// Accesseurs
int premiereValeur (listeEntiers liste);
int derniereValeur (listeEntiers liste);
int niemeValeur (listeEntiers liste, int n);
int nbElementsListe (listeEntiers liste);

// Proprietes de la liste
int estVide (listeEntiers liste);
int estDansListe (listeEntiers liste, int valeur);

// Affichage
void afficherListe (listeEntiers liste);

// // Modificateurs - Ajout
void ajouterElementDebut (int valeur, listeEntiers* liste);
void ajouterElementFin (int valeur, listeEntiers* liste);
void ajouterElementMilieu (int valeur, int position, listeEntiers* liste);

// Modificateurs - Suppression
void supprimerElementDebut (listeEntiers* liste);
void supprimerElementFin (listeEntiers* liste);
void supprimerElementMilieu (int position, listeEntiers* liste);
void supprimerValeur (int valeur, listeEntiers* liste);