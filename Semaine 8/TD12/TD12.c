#include "TD12.h"
int main() {
    listeEntiers liste = CreerListeVide();
    
    // Ajouter des elements a la liste
    printf("Avant d'ajouter des elements a la liste\n");
    ajouterElementDebut(5, &liste);
    printf("Apres avoir ajoute un element au debut de la liste\n");
    ajouterElementFin(10, &liste);
    printf("Apres avoir ajoute un element a la fin de la liste\n");
    ajouterElementMilieu(7, 2, &liste);
    printf("Apres avoir ajoute des elements a la liste\n");
    
    // Afficher la liste
    printf("Avant d'afficher la liste\n");
    afficherListe(liste);
    printf("Apres avoir affiche la liste\n");
    
    // Tester les accesseurs
    printf("Avant de tester les accesseurs\n");
    printf("Premiere valeur : %d\n", premiereValeur(liste));
    printf("Derniere valeur : %d\n", derniereValeur(liste));
    printf("3eme valeur : %d\n", niemeValeur(liste, 3));
    printf("Nombre d'elements : %d\n", nbElementsListe(liste));
    printf("Apres avoir teste les accesseurs\n");
    
    // Tester les proprietes de la liste
    printf("Avant de tester les proprietes de la liste\n");
    printf("La liste est vide : %s\n", estVide(liste) ? "oui" : "non");
    printf("La valeur 7 est dans la liste : %s\n", estDansListe(liste, 7) ? "oui" : "non");
    printf("Apres avoir teste les proprietes de la liste\n");
    
    // Supprimer des elements de la liste
    printf("Avant de supprimer des elements de la liste\n");
    supprimerElementDebut(&liste);
    printf("Apres avoir supprime un element du debut de la liste\n");
    supprimerElementFin(&liste);
    printf("Apres avoir supprime un element du milieu de la liste\n");
    supprimerValeur(7, &liste);
    printf("Apres avoir supprime des elements de la liste\n");
    
    // Afficher la liste apres suppression
    printf("Avant d'afficher la liste apres suppression\n");
    afficherListe(liste);
    printf("Apres avoir affiche la liste apres suppression\n");
    
    return 0;
}